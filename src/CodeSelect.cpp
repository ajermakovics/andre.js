#include <FL/Fl.H>
#include "MainWindow.h"
 
/*=============================================================================
	CodeSelect
=============================================================================*/
CodeSelect::CodeSelect(int x, int y, int w, int h)
:Fl_Hold_Browser(x, y, w, h, 0)
{
	MainWindow *Window = (MainWindow*) this->parent();
}

/*=============================================================================
	handle
=============================================================================*/
int CodeSelect::handle(int event)
{
	char quote;
	string Sel;
	int Index, PrevIndex;
	MainWindow *Window = (MainWindow*) this->parent();
	CodeItem* item = 0;
	
	// selected item
	if(this->value()>0) {
		item = (CodeItem*) (this->data(this->value()));
		if( item ) Sel = item->Text;
	} else Sel = "";
	
	switch(event)
	{
	 case FL_KEYDOWN:
			if(Fl::event_key() == FL_Enter ) 
			{							
				// insert selected item
				if(Key.substr(0,2) == "C_" && Sel[0] == '$') 
					Sel = Sel.substr(1, Sel.length()-1);	// get var without $
				
				if(Key.substr(0,2) == "A_") 
				{
					quote = Window->Editor->buffer()->character( TextStartPos-1 ); // same quote [' '] at end
					Sel = Sel + quote + "]";
				}
				
				if(Key.substr(0,2) == "K_") 
					Sel = Sel + "]";
				
				Window->Editor->buffer()->remove(TextStartPos, Window->Editor->insert_position());
				Window->Editor->insert_position(TextStartPos);	
				Window->InsertText( Sel.c_str() );
				this->Hide();
			}
			else if( Fl::event_key() == FL_Tab ) // complete
			{
				string Substr = this->CommonLeftSubstring();
				if( ! Substr.empty() )
				{
					Window->Editor->buffer()->remove(TextStartPos, Window->Editor->insert_position());
					Window->Editor->insert_position(TextStartPos);
					Window->InsertText( Substr.c_str() );
				}
				this->show();
				this->take_focus();
				//this->redraw();
			}
			else if( Fl::event_key() == FL_Left || Fl::event_key() == FL_Right || Fl::event_key() == FL_End || Fl::event_key() == FL_Home || Fl::event_key() == FL_Escape || Fl::event_key() == FL_Delete)
			{
				this->Hide();
			}
			else
			{
				if(Fl::event_key() == FL_BackSpace )
				{
					printf("CodeSelect BackSpace.\n");
					if(Window->Editor->insert_position() > 0 )
						Window->Editor->buffer()->remove(Window->Editor->insert_position()-1, Window->Editor->insert_position());
					Filter();
					Refresh();
					
					if(this->size() > 1) this->redraw();
					else this->Hide();
				}
				else if( Fl::event_text()[0] > 31 && Fl::event_text()[0] <  127 ) // printable character
				{
					Window->Editor->insert(Fl::event_text());
					Filter();
					Refresh();
					
					if(this->size() > 0) this->redraw();
					else { this->Hide(); }
					
					if( Fl::event_text()[0] == '[' )
						Window->ShowArrayBrowser();
				}
				
			}
	 break;
	 case FL_FOCUS:
	 		
	 break;
	 case FL_UNFOCUS:
	    this->Hide();
	 break;
	}

	PrevIndex = this->value()-1;
	
	// execute event
	int ret = Fl_Hold_Browser::handle(event);
	
	Index = this->value()-1;
	
	// selected item
	item = 0;
	if(this->value()>0) {
		item = (CodeItem*) (this->data(this->value()));
		if( item ) Sel = item->Text;
		//Sel = this->text(this->value());
	} else Sel = "";
	
	if( Index != PrevIndex && PrevIndex >= 0 && Index >= 0 ) 
	{
		if( Key.substr(0,2) == "F_"  
 				|| Key.substr(0,2) == "C_" && !Sel.empty() && Sel[0] != '$' )
		{
			if(item && item->Data) {
				Function* Fn = (Function*)(item->Data);
				Window->BrowserFnChanged(Fn);
			} else {
				Window->Params->hide();
			}
		}
		else
		{
			Window->Params->hide();
		}
	}
	
	return ret;
}
/*=============================================================================
	Add
=============================================================================*/
void CodeSelect::Add(const char * s, void * data_ptr)
{
	if( !s || strlen(s) == 0 ) return; // wtf
	if( FindItem(s) >= 0 ) return; // no duplicates
		
	CodeItem *NewItem = new CodeItem();
	
	if( NewItem ) {
		NewItem->Text = s;
		NewItem->Data = data_ptr;
		NewItem->Visible = 1;
		NewItem->FormatText = s;
						
		char buf[10];
		buf[0] = 0;
		
		if( NewItem->FormatText[0] == '$' ) {
			sprintf(&buf[0], "@C%d", FL_DARK_RED);
		} else if( !Key.empty() && Key[0] == 'C' ) {
			sprintf(&buf[0], "@C%d", FL_DARK_BLUE);
		}
		
		NewItem->FormatText = buf + NewItem->FormatText;
				
		Items.push_back(NewItem);
		
		Fl_Hold_Browser::add(NewItem->FormatText.c_str(), NewItem);
	}
}
/*=============================================================================
	FindItem
=============================================================================*/
int CodeSelect::FindItem(const char *s)
{
	int i;
	
	for(i = 0; i < Items.size(); i++ )
		if( Items[i]->Text == s ) return i;
		
	return -1;
}
/*=============================================================================
	Filter
=============================================================================*/
void CodeSelect::Filter()
{
	int i, l;
	MainWindow *Window = (MainWindow*) this->parent();
	
	if( TextStartPos > Window->Editor->insert_position() ) { this->Key = ""; this->Hide(); return; }
	
	string FilterStr = Window->Editor->GetText( TextStartPos, Window->Editor->insert_position() );
	l = FilterStr.length();
	
	// don't show if typed string too short
	if( (Key.substr(0,2) == "F_" || Key.substr(0,2) == "V_") && l<COMPLETION_START_LEN){ this->Key = ""; this->Hide(); return; }
	
	this->Key = this->Key.substr(0,2) + FilterStr;
   		
	for(i = 0; i < Items.size(); i++ )
	{
		if( FilterStr.empty() ) 
  		Items[i]->Visible = 1;
		else
		{
			if( Items[i]->Text.find(FilterStr) == 0) Items[i]->Visible = 1;
			else if( Items[i]->Text.find("$" + FilterStr) == 0 ) Items[i]->Visible = 1; // variable
			else Items[i]->Visible = 0;
		}	
	}
}
/*=============================================================================
	CommonLeftSubstring
=============================================================================*/
string CodeSelect::CommonLeftSubstring()
{
	int i, pos = 0, match = 1;
	char ch = 0;
	string Substr;
		
	if( this->Size(1) == 0 ) return "";
	else if( this->Size() == 1 && Items[0]->Visible) return Items[0]->Text;
		
	while( match )
	{
		for( i = 0; i < Items.size(); i++ )
		{
			if( Items[i]->Visible )
			{
				if( ch == 0 && Items[i]->Text.length() > pos ) // first loop in for
					ch = Items[i]->Text[pos];
				
				if( Items[i]->Text.length() <= pos 
					|| Items[i]->Text[pos] != ch )
				{
					ch = 0;
					match = 0;
					break;
				}
			}
		}
		
		if( ch ) 
			Substr += ch;
		ch = 0;
		pos++;
	}
		
	return Substr;
}
/*=============================================================================
	Refresh
=============================================================================*/
void CodeSelect::Refresh()
{
	int i;
	this->clear();
	
	for(i = 0; i < Items.size(); i++ )
	{
		if(Items[i]->Visible)
			this->add(Items[i]->FormatText.c_str(), Items[i] );
	}
	
	if(Items.size()>0)
		this->select(1);
}
/*=============================================================================
	Clear
=============================================================================*/
void CodeSelect::Clear()
{
	int i;
	
	for(i = 0; i < Items.size(); i++)
		delete Items[i];
		
	Items.clear();
	this->clear();
	this->Key = "";
}
/*=============================================================================
	Show
=============================================================================*/
void CodeSelect::Show(int NewTextStartPos)
{
	int i;
	MainWindow *Window = (MainWindow*) this->parent();
			
	if( ! Key.empty() )	
		switch(Key[0])
		{ 
			case 'A': this->textcolor(FL_RED); break;
			case 'F': this->textcolor(FL_DARK_BLUE); break;
			case 'C': this->textcolor(FL_BLACK); break;
			case 'V': this->textcolor(FL_DARK_RED); break;
			case 'K': this->textcolor(FL_DARK_BLUE); break;
			default:  this->textcolor(FL_BLACK); break;
		}
	else
		this->textcolor(FL_BLACK);
	
	if(NewTextStartPos == 0)
		TextStartPos = Window->Editor->insert_position();	
	else
		TextStartPos = NewTextStartPos;
	
	for(i = 0; i < Items.size(); i++)
		Items[i]->Visible = 1;
	
	if( x()+w() > Window->w() )
		this->x( Window->w()-w() );
			
	if( y()+h() > Window->h() )
		this->y( y()-h()-15 );
	
	Window->Params->hide();
  	
	this->show();
}
/*=============================================================================
	Hide
=============================================================================*/
void CodeSelect::Hide(int SetEditorFocus)
{
	MainWindow *Window = (MainWindow*) this->parent();
	
	this->hide();
	if(SetEditorFocus)
		Window->Editor->take_focus();
		
}
/*=============================================================================
	Item
=============================================================================*/
CodeItem* CodeSelect::Item(int Index)
{
	if(Index < 0) Index = this->value()-1;
	
	if(Index >= 0 && Index < Items.size())
		return Items[Index];
	else return NULL;
}
/*=============================================================================
	Size
=============================================================================*/
int CodeSelect::Size(int OnlyVisible)
{
	int i, count = 0;
	
	if( ! OnlyVisible ) return Items.size();
	
	for(i = 0; i < Items.size(); i++)
	{
		if( Items[i]->Visible ) count++;
	}
	
	return count;
}
