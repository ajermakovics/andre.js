#include "ClassItem.h"

#define LETTERS "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"
#define IDCHARS "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM_1234567890"

//===========================================================
Function::Function() {	 }
//===========================================================
Function::Function(string& NewName)
{
 this->Name = NewName;
}
//===========================================================
string Function::ParameterString()
{
 int i;
 string Buf;
   
 if(Parameters.size() == 0) return Buf;
 
 Buf = Parameters[0];
 for(i = 1; i < Parameters.size(); i++)
 	Buf = Buf + ", " + Parameters[i];
  
 return Buf;
}
//===========================================================
Archive& operator<<(Archive& arc, Function& Fn)
{
	arc<<Fn.Name<<Fn.JavaDoc<<Fn.Parameters;
	return arc;
}
//===========================================================
Archive& operator>>(Archive& arc, Function& Fn)
{
	arc>>Fn.Name>>Fn.JavaDoc>>Fn.Parameters;
	return arc;
}

//===========================================================
Archive& operator<<(Archive& arc, Variable& Var)
{
	arc<<Var.Name<<Var.ArrayKeys;
	return arc;
}
//===========================================================
Archive& operator>>(Archive& arc, Variable& Var)
{
	arc>>Var.Name>>Var.ArrayKeys;
	return arc;
}

//===========================================================
//     Variable
//===========================================================
Variable::Variable() {	 }
//===========================================================
Variable::Variable(string& NewName)
{
 this->Name = NewName;
}
//===========================================================
void Variable::AddArrayKey(string& Key)
{	
	int i, l = Key.length();
	
	if(Key.empty()) return;
	  
	if(l < 3) return; 
	if( Key[0] == '[' ) Key = Key.substr(1, l-2); // remove brackets [ ]
	l = Key.length();
	
	if( isalpha(Key[0]) ) // starts with a letter, not with a quote
 	{
		// is a constant
		for(i = 0; i < ConstArrayKeys.size(); i++) // check if exists
  		if(ConstArrayKeys[i] == Key) return;
  	  	
		ConstArrayKeys.push_back(Key);
	}
	else
	{
		// key is not a constant, maybe a string
	 	 		
	 if( Key.substr(0, 1) != "'" && Key.substr(0, 1) != "\"") return;
	 if( Key.substr(l-1, 1) != "'" && Key.substr(l-1, 1) != "\"") return;
		
   Key = Key.substr(1, l-2); // remove quotes
		    
   for(i = 0; i < ArrayKeys.size(); i++) // check if exists
   	if(ArrayKeys[i] == Key) return;
		
		ArrayKeys.push_back(Key);
	}
}
//===========================================================
StringVector operator+(StringVector& Vect, string& s)
{
	Vect.push_back(s);
	
	return Vect;
}
//===========================================================
StringVector operator+(string& s, StringVector& Vect)
{
	Vect.insert(Vect.begin(), s);
	
	return Vect;
}
//===========================================================
