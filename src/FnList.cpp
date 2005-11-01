#include "MainWindow.h"

/*=============================================================================
	FnList
=============================================================================*/
FnList::FnList(int x, int y, int w, int h)
:Fl_Select_Browser(x, y, w, h, 0)
{
	// FORMAT CHARACTERS: CHANGING TEXT COLORS IN LINES
	//    Warning: format chars are returned to you via ::text()
	//    @C# - text color             @b  - bold
	//    @B# - background color       @i  - italic
	//    @F# - set font number        @f  - fixed pitch font
	//    @S# - set point size         @u  - underline
	//    @.  - terminate '@' parser   @-  - strikeout
	//
	//this->add("Black @C1Red @C2Green @C3Yellow");
	
	// FORMAT CHARACTER ('@')
	//this->format_char(0);
}
/*=============================================================================
	~FnList
=============================================================================*/
//FnList::~FnList() { }
/*=============================================================================
	handle
=============================================================================*/
int FnList::handle(int event)
{
	int ret = Fl_Select_Browser::handle(event);
	int idx = this->value();
	int LineNo = 0;
				
	if(event == FL_PUSH && idx > 0)
	{
		CodeListItem* Item = (CodeListItem*)(this->data(idx));
		if( ! Item ) return 0;
    		
		if( Item->Type == CodeItemFunc)
		{
			LineNo = ((Function*)(Item->Data))->LineNo;
		}
		else if( Item->Type == CodeItemClass)
		{
			if( Fl::event_x() < 20 )
			{
				Item->IsOpen = ! Item->IsOpen;
				Refresh();
			}
			else
				LineNo = ((Class*)(Item->Data))->LineNo;
		}
		else if( Item->Type == CodeItemVariable)
		{
			LineNo = ((Variable*)(Item->Data))->LineNo;
		}
		
		if( LineNo > 0 )
			((MainWindow*)this->parent())->GoToLine( LineNo );
	}
	
	return ret;
}
/*=============================================================================
	Populate
=============================================================================*/
void FnList::Populate(FunctionMap Fns, string sFileName, bool AreChildren)
{
	string FormatText;
		
	FunctionMap::iterator j;
	for(j = Fns.begin(); j != Fns.end(); j++)
	{
 		if(j->second.LocationFile == sFileName)
    {
			FormatText = "@C" + num2str(FL_DARK_BLUE) + (j->second.Name); 
			FormatText += "@C0@S11 (" + j->second.ParameterString() + ")";
			this->Add( FormatText.c_str(), (void*)&(j->second), CodeItemFunc, AreChildren );
		}
	} 
	
	
}
/*=============================================================================
	Populate
=============================================================================*/
void FnList::Populate(FunctionMap Fns, ClassMap Cls, string sFileName)
{
	string ClsStr;
	string FormatText;
	ClassMap::iterator k;
	FunctionMap::iterator j;
	
	if( sFileName.empty() )
		return;
	
	this->Clear();
	this->Populate(Fns, sFileName, 0);
		
	for(k = Cls.begin(); k != Cls.end(); k++)
	{
 		if(k->second.LocationFile == sFileName)
    {
			ClsStr = k->second.Name;
			this->Add( ClsStr.c_str(), (void*)&(k->second), CodeItemClass, 0 );
						
			for(j = k->second.Functions.begin(); j != k->second.Functions.end(); j++)
			{
     		FormatText = "@C" + num2str(FL_DARK_BLUE) + (j->second.Name); 
				FormatText += "@C0@S11 (" + j->second.ParameterString() + ")";
			  this->Add( FormatText.c_str(), (void*)&(j->second), CodeItemFunc, 1 );
	    } 
			
		}
	}
	
	Refresh();
}
/*=============================================================================
	Add
=============================================================================*/
void FnList::Add(const char * text, void * data_ptr, CodeItemType Type, bool IsChild)
{	
	CodeListItem *NewItem = new CodeListItem();
	
	NewItem->Text = text;
	NewItem->Data = data_ptr;
	NewItem->Type = Type;
	NewItem->IsChild = IsChild;	
	NewItem->IsOpen = 1;	// default
	
	Items.push_back(NewItem);
	
	//this->add(text, data_ptr);
}
/*=============================================================================
	Refresh
=============================================================================*/
void FnList::Refresh()
{
	int i;
	bool LastClassOpen = 0;
	string Text;
	Function* Fn;
	this->clear();
	
	for(i = 0; i < Items.size(); i++ )
	{
		Text = Items[i]->Text;
		
		switch(Items[i]->Type)
		{
			case CodeItemClass:
				LastClassOpen = Items[i]->IsOpen;
				
				Text = "@C" + num2str(FL_DARK_BLUE) + Text; 
				Text += "@S11 : class";
				
				Text = "@C0" + Text;
				if( Items[i]->IsOpen ) Text = "- " + Text;
				else Text = "+ " + Text;
				
				this->add(Text.c_str(), (void*)(Items[i]) );	
			break;
			
			case CodeItemFunc:
				if( ! Items[i]->IsChild )
					this->add(Text.c_str(), (void*)(Items[i]) );
				else if( LastClassOpen ) // is child
				{
					Text = "    " + Text;
					this->add(Text.c_str(), (void*)(Items[i]) );
				}
			break;
			
			case CodeItemVariable:
				this->add(Text.c_str(), (void*)(Items[i]) );
			break;
		};
	}
}
/*=============================================================================
	Clear
=============================================================================*/
void FnList::Clear()
{
	int i;
	
	for(i = 0; i < Items.size(); i++)
		delete Items[i];
	
	Items.clear();
	this->clear();
}
/*=============================================================================
	item_draw - overriding the original fn
=============================================================================*/
void FnList::item_draw(void* v, int X, int Y, int W, int H) const 
{
  char* str = ((FL_BLINE*)v)->txt;
	char* next_fmt = str;
  const int* i = column_widths();
	int draw_len = 0;
	
  while (W > 6) {	// do each tab-seperated field
    int w1 = W;	// width for this field
    char* e = 0; // pointer to end of field or null if none
    if (*i) { // find end of field and temporarily replace with 0
      e = strchr(str, column_char());
      if (e) {*e = 0; w1 = *i++;}
    }
		draw_len = 0;
		
		while( next_fmt ) {
		
    int tsize = textsize();
    Fl_Font font = textfont();
    Fl_Color lcol = textcolor();
    Fl_Align talign = FL_ALIGN_LEFT;
    // check for all the @-lines recognized by XForms:
    while (*str == format_char() && *++str && *str != format_char()) {
      switch (*str++) {
      case 'l': case 'L': tsize = 24; break;
      case 'm': case 'M': tsize = 18; break;
      case 's': tsize = 11; break;
      case 'b': font = (Fl_Font)(font|FL_BOLD); break;
      case 'i': font = (Fl_Font)(font|FL_ITALIC); break;
      case 'f': case 't': font = FL_COURIER; break;
      case 'c': talign = FL_ALIGN_CENTER; break;
      case 'r': talign = FL_ALIGN_RIGHT; break;
      case 'B': 
	if (!(((FL_BLINE*)v)->flags & SELECTED)) {
	  fl_color((Fl_Color)strtol(str, &str, 10));
	  fl_rectf(X, Y, w1, H);
	} else strtol(str, &str, 10);
        break;
      case 'C':
	lcol = (Fl_Color)strtol(str, &str, 10);
	break;
      case 'F':
	font = (Fl_Font)strtol(str, &str, 10);
	break;
      case 'N':
	lcol = FL_INACTIVE_COLOR;
	break;
      case 'S':
	tsize = strtol(str, &str, 10);
	break;
      case '-':
	fl_color(FL_DARK3);
	fl_line(X+3, Y+H/2, X+w1-3, Y+H/2);
	fl_color(FL_LIGHT3);
	fl_line(X+3, Y+H/2+1, X+w1-3, Y+H/2+1);
	break;
      case 'u':
      case '_':
	fl_color(lcol);
	fl_line(X+3, Y+H-1, X+w1-3, Y+H-1);
	break;
      case '.':
	goto BREAK;
      case '@':
	str--; goto BREAK;
      }
    }
  BREAK:
		
		if( next_fmt = strchr(str, this->format_char() ) ) {
			draw_len = strlen(str) - strlen(next_fmt);	
			next_fmt[0] = 0; // place string terminator in str in place of format_char
		}	else 
			draw_len = 0; // all
		
    fl_font(font, tsize);
    if (((FL_BLINE*)v)->flags & SELECTED)
      lcol = fl_contrast(lcol, selection_color());
    if (!active_r()) lcol = fl_inactive(lcol);
    fl_color(lcol);
    
		if(draw_len > 0) // jermo
			w1 = fl_width(str, draw_len);
		else
			w1 = fl_width(str);
			
    fl_draw(str, X+3, Y, w1-6, H, e ? Fl_Align(talign|FL_ALIGN_CLIP) : talign, 0, 0);
        
    if(next_fmt) { // jermo
    	next_fmt[0] = this->format_char(); // reaplce string terminator with format_char
			str = next_fmt; // point to next @
			X += w1;
		}
		} // while( next_fmt )
		if (!e) break; // no more fields...
    *e = column_char(); // put the seperator back
    X += w1;
    W -= w1;
    str = e+1;
  }
}
