#include "Class.h"

//-----------------------------------------------------------------------------
Class::Class(string& NewName)
{
	this->Name = NewName;
	
	
}
//-----------------------------------------------------------------------------
Class::Class(){}
//-----------------------------------------------------------------------------
Function* Class::Constructor()
{
	if( Functions.count(this->Name) == 1 )
		return &(Functions[this->Name]);	
	
	Constr.Name = this->Name;
	Constr.LineNo = this->LineNo;
	Constr.JavaDoc = this->JavaDoc;
	Constr.LocationFile = this->LocationFile;
		
	return &(this->Constr);
}
//-----------------------------------------------------------------------------
/*
FunctionMap operator+(FunctionMap Map, Function Func)
{
	Map[Func.Name] = Func;
}
//-----------------------------------------------------------------------------
VariableMap operator+(VariableMap Map, Variable Var)
{
	Map[Var.Name] = Var;
}
//-----------------------------------------------------------------------------
FunctionMap operator+(Function Func, FunctionMap Map)
{
	Map[Func.Name] = Func;
}
//-----------------------------------------------------------------------------
VariableMap operator+(Variable Var, VariableMap Map)
{
	Map[Var.Name] = Var;
}
//-----------------------------------------------------------------------------
*/
