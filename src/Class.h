#include <string>
#include <map>
#include <algorithm>
#include "ClassItem.h"

using namespace std;

#ifndef _CLASS_H
#define _CLASS_H
typedef map<string, Function> FunctionMap;
typedef map<string, Variable> VariableMap;

class Class
{
	public:
		string Name;
		string BaseClassName;
		string LocationFile;
		int LineNo;
		string JavaDoc;
				
		VariableMap Variables;
		FunctionMap Functions;

  	Class();
  	Class(string& NewName);
		Function* Constructor();
		
	private:
		Function Constr;
};
#endif
