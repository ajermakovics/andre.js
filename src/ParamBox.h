#include <FL/Fl_Text_Display.H>
#include <FL/Fl_Text_Buffer.H>
#include "ClassItem.h"

struct Style_Table_Entry;

class ParamBox: public Fl_Text_Display
{
 public:
 	ParamBox(int x, int y, int w, int h);
	int value(Function Fn,  int SelectedParam = 1);
	int value(string Message);
	int Show(int InsPos = 0);
	int RequiredWidth();
	
 protected:
 	int sel_pos;
  int handle(int event);
	Fl_Text_Buffer* TextBuf;
	Fl_Text_Buffer* StyleBuf;
};
