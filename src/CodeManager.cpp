#include <FL/fl_ask.H>
#include <FL/filename.H>
#include "MainWindow.h"
 
#include "parse/parser.tab.c"
 
/*========================================================================*/
int CodeManager::RemoveFileInfo(string sFileName)
{
	if( sFileName.empty() ) 
		return 0;
	
	ClassMap::iterator i, del_i; 
	for(i = Classes.begin(); i != Classes.end(); )
 		if(i->second.LocationFile == sFileName) {
				del_i = i;
				i++;
    		Classes.erase(del_i);    		// remove this class 
		} else i++;
		
	FunctionMap::iterator j, del_j;
	for(j = GlobalFunctions.begin(); j != GlobalFunctions.end(); )
 		if(j->second.LocationFile == sFileName) {
				del_j = j;
				j++;
    		GlobalFunctions.erase(del_j);    		// remove this global func 
		} else j++;
		
	VariableMap::iterator k, del_k;
	for(k = GlobalVariables.begin(); k != GlobalVariables.end(); )
 		if(k->second.LocationFile == sFileName) {
				del_k = k;
				k++;
    		GlobalVariables.erase(del_k);    		// remove this global var 
		} else k++;
	
	return 1;	
}
/*========================================================================*/
Class* CodeManager::GetObjClass(string ObjName)
{
	Variable Var;
	
	if( GlobalVariables.count(ObjName) == 0 ) { printf("not found %s", ObjName.c_str() ); return NULL; }
 
	Var = this->GlobalVariables[ObjName];

	if( Classes.count(Var.Type) == 0 ) { printf("not found class %s", Var.Type.c_str() ); return NULL; }

	return &(this->Classes[Var.Type]); 
}
/*========================================================================*/
Class* CodeManager::GetCurClass(string FilePath, int LineNo)
{
	Class* MatchedClass = NULL;
	int MaxLineNo = 0;
	
	if( FilePath.empty() ) return 0;
	
	ClassMap::iterator i; 
	for(i = Classes.begin(); i != Classes.end(); i++)
 		if(i->second.LocationFile == FilePath)
    	if( i->second.LineNo <= LineNo && i->second.LineNo > MaxLineNo )
			{
				MaxLineNo = i->second.LineNo;
				MatchedClass = &(this->Classes[i->second.Name]);
			}
			
	return MatchedClass;
}
/*========================================================================*/
Function* CodeManager::GetCurFunction(string FilePath, int LineNo)
{
	Function* MatchedFn = NULL;
	int MaxLineNo = 0;
	
	if( FilePath.empty() ) return 0;
	
	FunctionMap::iterator i; 
	for(i = GlobalFunctions.begin(); i != GlobalFunctions.end(); i++)
 		if(i->second.LocationFile == FilePath)
    	if( i->second.LineNo <= LineNo && i->second.LineNo > MaxLineNo )
			{
				MaxLineNo = i->second.LineNo;
				MatchedFn = &(this->GlobalFunctions[i->second.Name]);
			}
			
	return MatchedFn;	
}
/*========================================================================*/
int CodeManager::AddClass(Class& Cls)
{
 // accessing an non existing class creates it
	if( Cls.Name.empty() ) return 0;
	
	this->Classes[Cls.Name] = Cls;
	
	/*if( Cls.Functions.count(Cls.Name) > 0 ) // have a constructor
	{
		AddGlobalFunction( this->Classes[Cls.Name].Functions[Cls.Name] );
	}
	else
	{
		// create constructor function
		Function Fn;
		Fn.Name = Cls.Name;
		//Fn.LocationFile = Cls.LocationFile;
		//Fn.LineNo = Cls.LineNo;
		Fn.JavaDoc = Cls.JavaDoc;
		
		AddGlobalFunction( Fn );
	}*/
} 
/*========================================================================*/
int CodeManager::AddConstant(string ConstantName, string FilePath, int LineNo)
{
 int l = ConstantName.length();

 if( FilePath.empty() ) return 0;

 //printf("Adding const: '%s'\n", ConstantName.c_str() );
	
 // accessing an non existing class creates it
 if( ConstantName.empty() ) return 0;
 
 if( ConstantName[0] == '\'') ConstantName = ConstantName.substr(1, l-2);
 if( ConstantName[0] == '"') ConstantName = ConstantName.substr(1, l-2);
 
 //this->Constants[ConstantName] = FilePath;
 
 // add as a function (to be shown together)
 Function Fn(ConstantName);
 //Fn.LocationFile = FilePath;
 //Fn.LineNo = LineNo;
 
 AddGlobalFunction(Fn);
 
 return 1;
}
/*========================================================================*/
int CodeManager::AddGlobalFunction(Function& Fn)
{
	if( Fn.Name.empty() ) return 0;
	this->GlobalFunctions[Fn.Name] = Fn;
}
/*========================================================================*/
int CodeManager::AddGlobalVariable(Variable& Var)
{
	// add if doesn't exist or either previous had no type or no array keys
	if( Var.Name.empty() ) return 0;
	 		
	if( this->GlobalVariables.count(Var.Name) == 0 
		|| (this->GlobalVariables[Var.Name].Type.empty() 
		    && this->GlobalVariables[Var.Name].ArrayKeys.size() == 0
      	&& this->GlobalVariables[Var.Name].ConstArrayKeys.size() == 0) )
	{			
		this->GlobalVariables[Var.Name] = Var;
	}	
	
	//printf("Adding global var: '%s', Type: '%s', Keys: %d\n", Var.Name.c_str(), GlobalVariables[Var.Name].Type.c_str(), GlobalVariables[Var.Name].ArrayKeys.size() );
	
}
/*========================================================================*/
int CodeManager::ParseFile(string sFileName)
{
	YyParams params;
	int parsed_files = 0, parse_failed;
	string File, PrevDir;
	Timer timer;

 	params.CodeMan = this; // for callbacks
	params.ParseFiles[sFileName] = 0; // 0 - unparsed, 1 - parsed

	IntMap::iterator i;

	for(i = params.ParseFiles.begin(); i != params.ParseFiles.end() ; )
	{
	  if(i->second == 0) // 0 - unparsed
		{
			File = i->first;
			params.ParseFiles[File] = 1; // 1 - mark as parsed

			if(File.length() > 1 && (File[0] == '"' || File[0] == '\'') )
				File = File.substr( 1, File.length()-2 ); // remove surrounding quotes from include file

			this->RemoveFileInfo(File); // remove previous info
			params.FileName = File;

			PrevDir = CurDir();
			if( IsDir( FileDir(File) ) )
				ChDir( FileDir(File) );
			
			printf("Parsing: '%s' from '%s'\n", File.c_str(), CurDir().c_str() );
			
			FILE* fp = fopen(File.c_str(), "r");
			if(!fp) 
   		{ 
     		i++; 
       	continue; 
      }
			
			//printf("Parsing: '%s'\n", File.c_str() );
			
			yyin = fp; // file to parse
			yyout = stdout; // messages
			
			line_no = 1;
			
			BEGIN(NON_PHP);
			parse_failed = 2; // start
			
			while(parse_failed)
				parse_failed = yyparse((void*)&params);
			
			fclose(fp);
			
			ChDir(PrevDir);

			i = params.ParseFiles.begin(); // if some other includes were found, start at begin
		} // this file was already parsed, proceed to next
		else i++;
 	}

} 
/*========================================================================*/
int CodeManager::serialize(string File)
{
	Archive arc; 
	if( ! arc.Open(File, true) ) return 0;
	arc<<GlobalFunctions;
	arc<<GlobalVariables;
	arc.Close();
	
	return 1;
}
/*========================================================================*/
int CodeManager::deserialize(string File)
{
	Archive arc;
	if( ! arc.Open(File, false) ) return 0;
	arc>>GlobalFunctions;
	arc>>GlobalVariables;
	arc.Close();
	
	return 1;	
}
/*========================================================================*/
void YyParams::AddParseFile(string& File)
{
	if(File.length() > 1 && (File[0] == '"' || File[0] == '\'') )
			File = File.substr( 1, File.length()-2 ); // remove surrounding quotes from include file
				
	File = AbsolutePath(File);
			
	this->ParseFiles[File] += 0; // set 0, if hadn't yet, leave 1 if had before
}
/*========================================================================*/
