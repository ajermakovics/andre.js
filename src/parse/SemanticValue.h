#include <string>
#include <map>
#include <vector>

using namespace std;

long SemanticValue_counter;
long SemanticValue_copy_counter;
long SemanticValue_del_counter;

class SemanticValue // : public Class
{
 public:
	string Str;						// Class.Name / StrVect[0]
	StringVector StrVect; // Class.FnMap[0].Patameters  
	Function Fn;					// Class.FnMap[0]
	FunctionMap FnMap;		// Class.FnMap
	Variable Var;					// Class.VarMap[0]
	VariableMap VarMap; 	// Class.VarMap
	Class Cls;						// Class
	int LineNo;						// Class.LineNo
		
	SemanticValue();
	~SemanticValue();
	SemanticValue& operator=(SemanticValue& sv);
	SemanticValue& operator=(char* s);
	SemanticValue& operator=(char c);
	
	VariableMap& AddVar(Variable& v) 		{ VarMap[v.Name] = v; 	return VarMap; };
	FunctionMap& AddFn(Function& f) 		{ FnMap[f.Name] = f; 		return FnMap; };
	StringVector& AppendStr(string& s) 	{ StrVect.push_back(s); return StrVect; };
	StringVector& PrependStr(string& s) { StrVect.insert(StrVect.begin(), s); return StrVect; };
	
	const char* c_str();
};
//=============================================================================
SemanticValue::SemanticValue()
{
	++SemanticValue_counter;
	//printf("New SemanticValue allocated: %d\n", SemanticValue_counter);
}
//=============================================================================
SemanticValue::~SemanticValue()
{
	++SemanticValue_del_counter;
	//printf("SemanticValue freed: %d\n", SemanticValue_del_counter);
}
//=============================================================================
SemanticValue& SemanticValue::operator=(SemanticValue& sv)
{
	this->Str = sv.Str;
	this->StrVect = sv.StrVect;
	this->Fn = sv.Fn;
	this->FnMap = sv.FnMap;
	this->Var = sv.Var;
	this->VarMap = sv.VarMap;
	this->Cls = sv.Cls;
	this->LineNo = sv.LineNo;

		++SemanticValue_copy_counter;
	//printf("Copying SemanticValue: %d\n", SemanticValue_copy_counter);
	
	return (*this);
}
//=============================================================================
SemanticValue& SemanticValue::operator=(char* s)
{
	this->Str = s;
	return (*this);
}
//=============================================================================
SemanticValue& SemanticValue::operator=(char c)
{
	this->Str = c;
	return (*this);
}
//=============================================================================
SemanticValue& operator+(SemanticValue& sv, char* s)
{
	sv.Str = sv.Str + s;
	return sv;
}
//=============================================================================
const char* SemanticValue::c_str()
{
	return this->Str.c_str();
}
//=============================================================================
SemanticValue& operator+(char* s, SemanticValue& sv)
{
	sv.Str = s + sv.Str;
	return sv;
}
//=============================================================================
SemanticValue& operator+(SemanticValue& sv1, SemanticValue& sv2)
{
	sv1.Str = sv1.Str + sv2.Str;
	return sv1;
}

//=============================================================================
