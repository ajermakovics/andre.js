#include "MainWindow.h"

void style_unfinished(int a, void *p) { }
//-----------------------------------------------------------------------------
Fl_Text_Display::Style_Table_Entry ParamStyleTable[] = {     // Style table
	{ FL_BLACK,      FL_COURIER,   			FL_NORMAL_SIZE }, // A - Normal, 
  { FL_BLACK,   	 FL_COURIER_BOLD, 	FL_NORMAL_SIZE },  // B - Selected, 
  { FL_BLACK,      FL_COURIER,   			12 }, // C - Message,
  { FL_INACTIVE_COLOR,  FL_COURIER, 	12 } // D - doc
};
/*=============================================================================
	ParamBox
=============================================================================*/
ParamBox::ParamBox(int x, int y, int w, int h)
:Fl_Text_Display(x, y, w, h, 0) 
{
	this->TextBuf = new Fl_Text_Buffer();
	this->StyleBuf = new Fl_Text_Buffer();
	
	this->buffer(TextBuf);
	
	this->highlight_data(StyleBuf, ParamStyleTable,
                          sizeof(ParamStyleTable) / sizeof(ParamStyleTable[0]),
                          'A', style_unfinished, 0);
	
	this->box(FL_BORDER_BOX);
	
	this->hide();
}

/*=============================================================================
	handle
=============================================================================*/
int ParamBox::handle(int event)
{
	switch(event)
	{
		case FL_FOCUS:
	    this->hide();
	 	break;
	}
	
	return Fl_Text_Display::handle(event);
}
/*=============================================================================
	value
=============================================================================*/
int ParamBox::value(Function Fn, int SelectedParam)
{
	string Text, Style, Item;
	int i, lines, height, width, y, posx, posy;
	
	sel_pos = 0;
 	
	// JavaDoc
	if( ! Fn.JavaDoc.empty() )
	{
		Item = Fn.JavaDoc + '\n';
		Text += Item;
		Style.append(Item.length(), 'D');
	}
	
	// Fn name
	Item = Fn.Name + " (";
	Text += Item;
	Style.append(Item.length(), 'A');
	
	// params		
	for(i=0; i<Fn.Parameters.size(); i++)
	{
		Item = Fn.Parameters[i];
		if(i > 0) Item = ", " + Item;
				
		Text += Item;
		
		if(SelectedParam == i+1)
		{
			sel_pos = Text.length();
			Style.append(Item.length(), 'B');
		}
		else
			Style.append(Item.length(), 'A');
	}
	
	Item = ")";
	Text += Item;
	Style.append(Item.length(), 'A');
	
	this->StyleBuf->text( Style.c_str() );
	
	lines = 1; // fn
	for(i=0; i<Text.length(); i++)
		if(Text[i] == '\n') lines++;
		else if(Text[i] == '\r') Text[i] = ' ';
	
	this->buffer()->text( Text.c_str() );
		
	MainWindow* Window = (MainWindow*)(this->parent());
	
	height = lines*15 + 5;
		
	y = this->y() - 10 - height;
	
	// show below cursor
	if( y < 0 )
		y = this->y() + 15;
	
	this->resize(x(), y, w(), height );
		
	this->redraw();
}
/*=============================================================================
	value
=============================================================================*/
int ParamBox::value(string Text)
{
	string Style(Text.length(), 'C');
	int i, lines, height, posx, posy;
	
	sel_pos = 0;
	
	this->buffer()->text( Text.c_str() );
	this->StyleBuf->text( Style.c_str() );
	
	lines = 1; // fn
	for(i=0; i<Text.length(); i++)
		if(Text[i] == '\n') 
		{
			lines++;
		}
		else 
		{	
			if(Text[i] == '\r') Text[i] = ' ';
		}
		
	height = lines*12;
	
	//position_to_xy(Text.length()-1, &posx, &posy);
	//this->sel_pos = Text.length();
	
  this->resize(x(), y(), w(), height );	
}
/*=============================================================================
	Show
=============================================================================*/
int ParamBox::Show(int InsPos)
{
	// determine width
	int posx, posy, x;
	MainWindow* Window = (MainWindow*)(this->parent());
	
	this->show();
		
	if(this->sel_pos > 0)
	{
		position_to_xy(this->sel_pos, &posx, &posy);
	
		if(posx > Window->w()) // make sure current param visible
		{
			x = posx - Window->w();
			
			printf("Show() posx: %d, x: %d, Window->w(): %d, this->x(): %d, this->w(): %d \n", posx, x, Window->w(), this->x(), this->w());
			printf("Show() Editor->w(): %d, Editor->x(): %d \n", Window->Editor->w(), Window->Editor->x());
			
			if( x < 0 ) x = 0;
			if( x > this->x() ) x = 0;
			
			this->resize(this->x()-x, this->y(), this->w(), this->h() );
		}
	}
	
	this->resize(this->x(), this->y(), RequiredWidth()+5, this->h() );
		
	scrollbar_width(0); // no scrollbar
	
	this->redraw();
		
}
/*=============================================================================
	RequiredWidth
=============================================================================*/
int ParamBox::RequiredWidth()
{
	// must be called after show()
	int i, maxwidth = 0, y = 0, x  = 0;
	
	position_to_xy(this->buffer()->length(), &x, &y);
	maxwidth = x;
	
	for(i=0; i< this->buffer()->length(); i++)
	{
		if( this->buffer()->character(i) == '\n')
		{
			position_to_xy(i, &x, &y);
			if( x > maxwidth)
				maxwidth = x;
		}
	}
	
	return maxwidth - (this->x());
}


