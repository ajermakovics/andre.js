#include <FL/Fl_Hold_Browser.H>

//======================================================
enum CodeSelectType
{
	CodeSelClass = 0,
	CodeSelFuncs = 1,
	CodeSelVariables = 2,
	CodeSelKeys = 3
};
//======================================================
class CodeItem
{
	public:
		string Text;
		string FormatText;
		void* Data;
		int Visible;
};
//======================================================
class CodeSelect: public Fl_Hold_Browser
{
 public:
 	CodeSelect(int x, int y, int w, int h);
 	
	void Add(const char * s, void * p); 
	void Refresh();
	void Clear();
	void Show(int NewTextStartPos = 0);
	void Hide(int SetEditorFocus = 1);
	int FindItem(const char *s);
	int Size(int OnlyVisible = 0);
	CodeItem* Item(int Index = -1);
	string Key;
	enum CodeSelectType Type;
	
 private:
  int handle(int event);
	int TextStartPos;
	string CommonLeftSubstring();
	void Filter();
	vector<CodeItem*> Items;
};
//======================================================
