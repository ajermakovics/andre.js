#include <FL/Fl_Select_Browser.H>
//#include "Class.h"
#include "CodeManager.h"

#define SELECTED 1
#define NOTDISPLAYED 2

//======================================================
struct FL_BLINE {	// data is in a linked list of these
  FL_BLINE* prev;
  FL_BLINE* next;
  void* data;
  short length;		// sizeof(txt)-1, may be longer than string
  char flags;		// selected, displayed
  char txt[1];		// start of allocated array
};
//======================================================
enum CodeItemType
{
	CodeItemClass = 0,
	CodeItemFunc = 1,
	CodeItemVariable = 2
};
//======================================================
class CodeListItem
{
	public:
		string Text;
		void* Data;
		bool IsOpen; // expanded in tree (for classes)
		bool IsChild; // method or property of a class
		int LineNo;
		CodeItemType Type;
};
//-------------------------------------------------
class FnList: public Fl_Select_Browser
{
	public:
		FnList(int x, int y, int w, int h);
		
		void Populate(FunctionMap Fns, string sFileName, bool AreChildren = 0);
		void Populate(FunctionMap Fns, ClassMap Cls, string sFileName);
		
		void Add(const char * text, void * data_ptr, CodeItemType Type, bool IsChild);
		void Refresh();
		void Clear();
		
		int handle(int event);
		
	private:
		vector<CodeListItem*> Items;
		string LastOpenClass;
		void item_draw(void* v, int X, int Y, int W, int H) const;
};
//-------------------------------------------------
