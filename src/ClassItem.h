#include <string>
#include <vector>
#include "Archive.h"

#ifndef _ClassItem_H
#define _ClassItem_H

using namespace std;

typedef vector<string> StringVector;

//-----------------------------------------------------------------------------
class Function
{
 public:
	string Name;
	string LocationFile;
	StringVector Parameters;
	int LineNo;
	string JavaDoc;

	Function();
	Function(string& NewName);
	string ParameterString();
	
	int serialize();
	int deserialize();
};
//-----------------------------------------------------------------------------
Archive& operator<<(Archive& arc, Function& Fn);
Archive& operator>>(Archive& arc, Function& Fn);
//-----------------------------------------------------------------------------
class Variable
{
 public:
	 string Name;
	 string Type;
	 string LocationFile;
	 int LineNo;
	 StringVector ArrayKeys; // if var is an array
	 StringVector ConstArrayKeys; // if var is an array of with const
	 string JavaDoc;
	 
	 Variable();
	 Variable(string& NewName);
	 
	 void AddArrayKey(string& Key);
};
//-----------------------------------------------------------------------------
Archive& operator<<(Archive& arc, Variable& Var);
Archive& operator>>(Archive& arc, Variable& Var);
//-----------------------------------------------------------------------------
class Constant
{
	public:
		string Name;
		string LocationFile;
		int LineNo;
		//string Value;
};
//-----------------------------------------------------------------------------
#endif
