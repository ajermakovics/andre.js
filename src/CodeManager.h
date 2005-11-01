#include <string>
#include <map>
#include <algorithm>
#include <unistd.h>
#include "Class.h" 

#ifndef _CodeManager_H
#define _CodeManager_H

using namespace std;

typedef map<string, Class> ClassMap;
typedef map<string, int> IntMap;
typedef map<string, string> StringMap;
//----------------------------------------------------------------------------
class CodeManager
{
	public:
 		int ParseFile(string sFileName);
		int RemoveFileInfo(string sFileName);
		Class* GetObjClass(string ObjName);
		Class* GetCurClass(string FilePath, int LineNo);
		Function* GetCurFunction(string FilePath, int LineNo);
		int AddClass(Class& Cls);
 		int AddGlobalVariable(Variable& Var);
		int AddGlobalFunction(Function& Fn);
		int AddConstant(string ConstantName, string FilePath, int LineNo = 0);
		int serialize(string File);
		int deserialize(string File);

		FunctionMap GlobalFunctions;
		VariableMap GlobalVariables;
    ClassMap Classes;
    StringMap Constants;
    				
//	private:	
};
//----------------------------------------------------------------------------
// params to yyparse f-n
class YyParams 
{ 
	public: 
 		CodeManager* CodeMan; 
   	string FileName;

    string LastVar;
   	string CurClass;
		IntMap ParseFiles;
		
		void AddParseFile(string& File);
}; 
//----------------------------------------------------------------------------
#endif
