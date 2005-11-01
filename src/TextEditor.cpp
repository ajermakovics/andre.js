#include <FL/Fl.H>
#include "MainWindow.h"
#include "syn/lex.syn.c"

#define BUF_SIZE 256*1024

//----------------------------------------------------------------------------- 
struct Style_Table_Entry {
  Fl_Color color;
  Fl_Font  font;
  int      size;
  unsigned attr;
};
//-----------------------------------------------------------------------------
Fl_Text_Display::Style_Table_Entry StyleTable[] = {     // Style table
	{ FL_BLACK,      FL_COURIER,   			FL_NORMAL_SIZE }, // A - Blanks
  { FL_DARK_RED,   FL_COURIER, 				FL_NORMAL_SIZE }, // B - Variables
  { FL_RED, 			 FL_COURIER, 				FL_NORMAL_SIZE }, // C - Strings
  { FL_BLUE,       FL_COURIER,        FL_NORMAL_SIZE }, // D - Numbers
  { FL_BLACK,  		 FL_COURIER,  			FL_NORMAL_SIZE }, // E - Symbols
  { FL_DARK_GREEN, FL_COURIER_ITALIC, FL_NORMAL_SIZE }, // F - Comments
	{ FL_DARK_BLUE,  FL_COURIER,        FL_NORMAL_SIZE }, // G - Id 
	{ FL_BLACK,  		 FL_COURIER_BOLD,   FL_NORMAL_SIZE }, // H - Keyword
	{ FL_BLUE,		 	 FL_COURIER_BOLD,   FL_NORMAL_SIZE }, // I - Highlight
	{ FL_RED, 		 	 FL_COURIER_BOLD,   FL_NORMAL_SIZE }, // J - Error
	{ FL_BLUE,       FL_COURIER,        FL_NORMAL_SIZE }, // K - Html symb
	{ FL_DARK_RED,   FL_COURIER, 				FL_NORMAL_SIZE }, // L - Html id's
	{ FL_DARK_YELLOW,FL_COURIER, 				FL_NORMAL_SIZE }, // M - Html Strings
	{ FL_BLACK,      FL_COURIER,   			FL_NORMAL_SIZE }, // N - Html text
	{ FL_INACTIVE_COLOR, FL_COURIER_ITALIC, FL_NORMAL_SIZE }  // O - Html comment
};
//-----------------------------------------------------------------------------
void style_unfinished_cb(int a, void *p) { }
//-----------------------------------------------------------------------------
void style_update(int        pos,          // I - Position of update
             int        nInserted,    // I - Number of inserted chars
             int        nDeleted,     // I - Number of deleted chars
             int        nRestyled,    // I - Number of restyled chars
             const char *deletedText, // I - Text that was deleted
             void       *cbArg)       // I - Callback data
{
	TextEditor* e = (TextEditor*) cbArg;
	char *style;
	char start_tok, end_tok;
	int prev_tok_start_pos, prev_tok_end_pos;
	int tok_start_pos, tok_end_pos;
	static MainWindow* Window;
	
	// If this is just a selection change, just unselect the style buffer...
  if (nInserted == 0 && nDeleted == 0) {
    e->StyleBuf->unselect();
    return;
  }
 	
	// Track changes in the text buffer...
  if (nInserted > 0) {
    // Insert characters into the style buffer...
    style = new char[nInserted + 1];
    memset(style, 'A', nInserted); // default style
    style[nInserted] = '\0';
		
    e->StyleBuf->replace(pos, pos + nDeleted, style);
    delete[] style;
  } else {
    // Just delete characters in the style buffer...
    e->StyleBuf->remove(pos, pos + nDeleted);
  }
	
	/*
	// find backwards the beginning of current token type
	prev_tok_start_pos = pos;
	if(prev_tok_start_pos < 0) prev_tok_start_pos = 0;
	start_tok = e->StyleBuf->character(prev_tok_start_pos);
	
	while(prev_tok_start_pos > 0 && start_tok == e->StyleBuf->character(prev_tok_start_pos) )
		prev_tok_start_pos--;
				
	// find forward the end of current token type
	prev_tok_end_pos = pos;
	end_tok = e->StyleBuf->character(prev_tok_end_pos);
	
	while( prev_tok_end_pos < e->StyleBuf->length() && end_tok == e->StyleBuf->character(prev_tok_end_pos) )
		prev_tok_end_pos++;
	*/
	
	//---- COLORIZE -----
	e->Colorize(0, -1); // update style buffer for all file
	//-------------------
	
	/*
	// find backwards the beginning of current token type
	tok_start_pos = pos;
	if(tok_start_pos < 0) tok_start_pos = 0;
	start_tok = e->StyleBuf->character(tok_start_pos);
	
	while(tok_start_pos > 0 && start_tok == e->StyleBuf->character(tok_start_pos) )
		tok_start_pos--;
				
	// find forward the end of current token type
	tok_end_pos = pos;
	end_tok = e->StyleBuf->character(tok_end_pos);
	
	while( tok_end_pos < e->StyleBuf->length() && end_tok == e->StyleBuf->character(tok_end_pos) )
		tok_end_pos++;
	
	// take largest range
	tok_start_pos = tok_start_pos < prev_tok_start_pos ? tok_start_pos : prev_tok_start_pos;
	tok_end_pos = tok_end_pos > prev_tok_end_pos ? tok_end_pos : prev_tok_end_pos;
	
	// recolorize the changed area
	e->redisplay_range(tok_start_pos, tok_end_pos);  
	*/
	
	//e->redisplay_range(0, e->buffer()->length() );  
	
	// redraw works fast enough 
	e->redraw();
			
	// show param window
	if(Window == NULL)
		Window = (MainWindow*)e->parent();
	
	if(e->CursorInParameters)
		Window->ShowFuncParams(e->LastFn, e->LastFnPos, e->FnParamNr);
	else
		Window->Params->hide();
	
	if( ! e->NewFile	) // if editing, but not changing files
		Window->CurFileChanged();
}
/*=============================================================================
	TextEditor
=============================================================================*/
TextEditor::TextEditor(int x, int y, int w, int h)
:Fl_Text_Editor(x, y, w, h)
{
 TextBuf = new Fl_Text_Buffer();
 StyleBuf = new Fl_Text_Buffer();
 
 this->textfont(FL_COURIER);
 
 this->buffer(TextBuf);
 
 this->highlight_data(StyleBuf, StyleTable,
                          sizeof(StyleTable) / sizeof(StyleTable[0]),
                          'A', style_unfinished_cb, 0);
													
 //this->style_unfinished_cb
 
 NewFile = false;
 
 TextBuf->add_modify_callback(style_update, this);
}

/*=============================================================================
	~TextEditor
=============================================================================*/
TextEditor::~TextEditor()
{
 //if(TextBuf) delete TextBuf; // causes error on closing, can't modify callback
 if(StyleBuf) delete StyleBuf;
}

/*=============================================================================
	ChangeFile
=============================================================================*/
int TextEditor::ChangeFile(EditorFile* NewFile)
{
	this->NewFile = true;
	
	if(NewFile != NULL)
	{
		this->TextBuf->text( NewFile->TextBuffer->text() ); // copy text
		this->insert_position( NewFile->insert_position );
		this->scroll( NewFile->TopLine , 0);
		
		if( NewFile->SelectionStart || NewFile->SelectionEnd )
			this->TextBuf->select( NewFile->SelectionStart, NewFile->SelectionEnd);
	}
	else
	{
		this->TextBuf->text("");
	}
	
	// create style buffer
	char* style = new char[this->TextBuf->length()];
	if(style)
	{
		memset(style, 'A', this->TextBuf->length());
		this->StyleBuf->text( style );
		delete[] style; // free style 
	}
	
	this->Colorize(0, -1);
	
	this->NewFile = false;	
	
	return 1;
}

/*=============================================================================
	handle
=============================================================================*/
int TextEditor::handle(int event)
{
	if(event == FL_MOVE) return 0; // ignore mouse move
	
	static MainWindow* Window;
	static string EventText;
	
	if(Window == NULL)
		Window = (MainWindow*) this->parent();
	
	if(event == FL_KEYDOWN)
		EventText = Fl::event_text();
			
	switch(event)
	{	
	  case FL_KEYDOWN:		
		
	    if(Fl::event_key() == 46 && (Fl::event_state() | FL_SHIFT) == Fl::event_state() ) // '.' = 46 '>' 
			{
				//entered '>'
				this->insert(">");
				Window->ShowBrowser(); // show class properties
				return 0; 			
			}
			else if( (EventText == "'" || EventText == "\"") && (CurToken == "[" || buffer()->character( insert_position()-1 ) == '[' ))
			{
				// entered [' or ["
				this->insert(EventText.c_str());
				Window->ShowArrayBrowser(); // show array keys
				return 0;
			}
			else if( EventText == "[" )
			{
				// entered [
				this->insert(EventText.c_str());
				Window->ShowArrayBrowser(); // show array keys
				return 0;
			}
			else if( EventText == ":" && (CurToken == "::" || buffer()->character( insert_position()-1 ) == ':' ))
			{
				// entered '::'
				this->insert(EventText.c_str());
				Window->ShowClassBrowser(PrevToken);
				return 0; 
			}
			else if( Fl::event_key() == FL_Enter ) // start next line where this line started
			{
				string Line = this->LineText();
				int i = 0;
				if(Line.length() > 0)
					while( Line[i] == ' ' || Line[i] == '\t' ) 
     				i++;
				
				if(i > 0)
				{
					string NextLine = Line.substr(0, i);
					NextLine = "\n" + NextLine;
					this->buffer()->insert( this->insert_position(), NextLine.c_str() );
					this->insert_position( this->insert_position() + NextLine.length()  );
					return 0;
				}
				//else 	fl_message("InsPos: %d, Line: '%s', i: %d", this->insert_position(), Line.c_str(), i );
			}
			else if( Fl::event_key() == FL_Insert )
				return 0;
			else if( Fl::event_key() == FL_Control_R )  
				return 0;
			else if( Fl::event_key() == FL_Up || Fl::event_key() == FL_Down )
			{
				Window->Params->hide();
			}
			
	 break; 
	 
	 case FL_PUSH: // mouse down
			Window->Params->hide();
	 break;
	 
	 case FL_UNFOCUS: // lost	focus	
	 		Window->Params->hide();
	 break;
	 
	 case FL_RELEASE: // mouse release
	 	int start, end;	// select '$' as part of the word
    if( this->buffer()->selection_position(&start, &end) )
    	if( start > 0 && this->buffer()->character(start-1) == '$' )
    		this->buffer()->select(start-1, end);
	 break;
	 
	 	case FL_DND_ENTER: return 1; break;
		case FL_DND_DRAG: return 1; break;
		case FL_DND_RELEASE: return 1; break;
		//case FL_PASTE: printf("DnD: %s\n", Fl::event_text() ); 	break;
	}
	
	// execute the event
	int ret = Fl_Text_Editor::handle(event);
	
	// actions after event // && Fl::event_key() != FL_BackSpace && Fl::event_key() != 32
	if(event == FL_KEYDOWN )
	{
		int InsCh = 0;
		
		if( ! EventText.empty() && this->insert_position()>0)
		{
			InsCh = this->buffer()->character( this->insert_position()-1 );
		}
		
		if( (InsCh > 0 && InsCh < 8) || ( InsCh>13 && InsCh < 32) || (InsCh >= 127) )
		{
			// unprintable
			printf("Unprintable: %d - '%c'\n", InsCh, InsCh);
			if(this->insert_position() > 0)
				this->buffer()->remove(this->insert_position()-1, this->insert_position() );
		}
		else if( (InsCh > 7 && InsCh < 14) || InsCh == 32 ) 
		{
				// not doing anyhting for blank chars
		}
		else if( InsCh != 0 && CurTokenType == T_ID   
						 && CurToken.size() >= COMPLETION_START_LEN && (Fl::event_state() | FL_CTRL) != Fl::event_state()  )
		{
			// if typing a function name (probably)
			printf("ShowFuncBrowser for '%s'. InsCh: %d - '%c', '%s'\n", CurToken.c_str(), InsCh, InsCh, EventText.c_str() );
			if(Window->ShowFuncBrowser(CurToken))	return 0; 
		}
		else if( InsCh != 0 && CurTokenType == T_VARIABLE && CurToken.size() >= COMPLETION_START_LEN && (Fl::event_state() | FL_CTRL) != Fl::event_state() )
		{
			// if typing a variable name (probably)
			if(Window->ShowVarBrowser(CurToken)) return 0; 
		}
	}
	
	if( event == FL_PUSH || event == FL_KEYDOWN )
	{
		Window->LineChanged();
		this->HighlightMatching(); 
	}
	
	return ret;
}
/*=============================================================================
	InsertEcho
=============================================================================*/
int TextEditor::InsertEcho()
{
	if( this->StyleBuf->character( this->insert_position() ) >= T_HTML_SYM 
			 || this->StyleBuf->character( this->insert_position() ) == T_HTML_STR ) // in html
	{
		this->insert("<?=  ?>");
		this->insert_position( this->insert_position() - 3 );
	}
	else
		this->insert("echo ");
	
	
}
/*=============================================================================
	GetText
=============================================================================*/
char* TextEditor::GetText(int start, int end)
{
	return this->TextBuf->text_range(start, end);
}

/*=============================================================================
	TextLength
=============================================================================*/
int TextEditor::TextLength()
{
	return this->TextBuf->length();
}
/*=============================================================================
	TopLine
=============================================================================*/
int TextEditor::TopLine()
{
	return get_absolute_top_line_number();
}
/*=============================================================================
	position_xy
=============================================================================*/
void TextEditor::position_xy(int *x, int *y, int pos)
{
	if(pos < 0) 
		pos = insert_position();
		
 	position_to_xy(pos, x, y);
}

/*=============================================================================
	HighlightMatching
=============================================================================*/
int TextEditor::HighlightMatching(int pos)
{
	static char cur_style;
	static int prev_pos, cur_pos, opp_pos, is_highlighted;
 	char current, opposite, HighlightStyle[2], PrevStyle[2];
	int direction, i, last, count = 0;
				
	if(pos < 0) pos = this->insert_position();
	
	if(pos == prev_pos) return 0; // if pos has not changed, do nothing
	prev_pos = pos;		
		
	if(is_highlighted) 
	{ 
		// remove current highlight
		PrevStyle[0] = cur_style; 
		PrevStyle[1] = 0;
		
		if( this->StyleBuf->character(cur_pos) == T_HIGHLIGHT  ) // || == T_ERROR
			this->StyleBuf->replace(cur_pos, cur_pos+1, &PrevStyle[0]);
		this->redisplay_range(cur_pos, cur_pos+1);		
		
		if(opp_pos >= 0)
		{				
			if( this->StyleBuf->character(opp_pos) == T_HIGHLIGHT )
				this->StyleBuf->replace(opp_pos, opp_pos+1, &PrevStyle[0]);
				
			this->redisplay_range(opp_pos, opp_pos+1);
		}

		is_highlighted = 0;
	}
	
	current = this->buffer()->character(pos);
		
	if(current == '(') 			{ opposite = ')'; direction = 1; 	last = this->buffer()->length(); }
	else if(current == ')') { opposite = '('; direction = -1; last = -1; }
	else if(current == '{') { opposite = '}'; direction = 1; 	last = this->buffer()->length(); }
	else if(current == '}') { opposite = '{'; direction = -1; last = -1; }
	else if(current == '[') { opposite = ']'; direction = 1; 	last = this->buffer()->length(); }
	else if(current == ']') { opposite = '['; direction = -1; last = -1; }
	else if(pos==0) return 0;
	else // look at the previous position: }|
	{	
		pos--;
		current = this->buffer()->character(pos);
				
		if(current == '(') 			{ opposite = ')'; direction = 1; 	last = this->buffer()->length(); }
		else if(current == ')') { opposite = '('; direction = -1; last = -1; }
		else if(current == '{') { opposite = '}'; direction = 1; 	last = this->buffer()->length(); }
		else if(current == '}') { opposite = '{'; direction = -1; last = -1; }
		else if(current == '[') { opposite = ']'; direction = 1; 	last = this->buffer()->length(); }
		else if(current == ']') { opposite = '['; direction = -1; last = -1; }
		else return 0;
	}
	
	cur_style = this->StyleBuf->character(pos);
	count = 0; // count
	cur_pos = pos;
	opp_pos = -1;
	
	for( ; pos != last; pos += direction)
	{
		if(this->StyleBuf->character(pos) == cur_style)
		{
			if(this->buffer()->character(pos) == current)
				count++;
			else if(this->buffer()->character(pos) == opposite)
				count--;
				
			if(count == 0)
			{
				opp_pos = pos;
				break;
			}
		}	
	}

	if(opp_pos >= 0)
	{
		HighlightStyle[0] = T_HIGHLIGHT;
		HighlightStyle[1] = 0;
		this->StyleBuf->replace(cur_pos, cur_pos+1, &HighlightStyle[0]);
		this->StyleBuf->replace(opp_pos, opp_pos+1, &HighlightStyle[0]);
		
		this->redisplay_range(cur_pos, cur_pos+1);
		this->redisplay_range(opp_pos, opp_pos+1);
		
		is_highlighted = 1;
	}
	else
	{
		HighlightStyle[0] = T_ERROR;
		HighlightStyle[1] = 0;
		this->StyleBuf->replace(cur_pos, cur_pos+1, &HighlightStyle[0]);
		this->redisplay_range(cur_pos, cur_pos+1);
		is_highlighted = 1;
	}
	
	return is_highlighted;
}
/*=============================================================================
	Colorize
=============================================================================*/
int TextEditor::Colorize(int start, int end)
{
	// update style buffer for positions start - end
	
	char tok_type; 
	int pos = start, tok_len = 0, cur_pos = this->insert_position();
	char* style;
			
	// set globals for the lexer
	syn_start_pos = start; // will be changed
	cur_ed = this;
	if(end >= 0)
		syn_end_pos = end;
	else
		syn_end_pos = this->TextBuf->length() - 1;		
	
	while( ! FnStack.empty() )
	{
		delete(FnStack.top());
		FnStack.pop();
	}
	LastFn = "";
	BEGIN(HTML); 
	 
	// grab a token per time and set style buffer for it
	while( ( tok_type = syn_lex(this, &tok_len) ) != 0 )
	{
		// update characters in the style buffer...
		style = new char[tok_len + 1];
		
		if(style)
		{
    	memset(style, tok_type, tok_len);
    	style[tok_len] = '\0';
    	this->StyleBuf->replace(pos, pos + tok_len, style);
			delete[] style;
		}
		
		if(pos <= cur_pos) // parse thigs before cursor
		{
			EditParse(pos, tok_len, tok_type);
		}
			
    pos += tok_len;
	}
		
}
/*=============================================================================
	EditParse
=============================================================================*/
int TextEditor::EditParse(int pos, int tok_len, char tok_type)
{
	static int prev_token_pos;
	static int LeftParens;
	static int RightParens;
	static int prev_pos;
	static char prev_type;
		
	if(tok_type != T_BLANK && tok_type != T_COMMENT) // if a relevant token
	{	
		PrevToken = CurToken;
		prev_tok_type = prev_type;
		prev_token_pos = prev_pos;
		
		CurToken = this->TextBuf->text_range(pos, pos + tok_len);
		CurTokenType = tok_type;
						
		if( (prev_tok_type == T_ID || prev_tok_type == T_KEYWORD) && tok_type == T_SYMBOL && CurToken == "(") // start of a fn
		{
			if( ! LastFn.empty() )
			{
				// push current fn on stack
				CodeFn* NewFn = new CodeFn;
				NewFn->Name = LastFn;
				NewFn->pos = LastFnPos;
				NewFn->LeftParens = LeftParens;
				NewFn->RightParens = RightParens;
				NewFn->ParamNr = FnParamNr;
				
				FnStack.push(NewFn);
			}
			
			LastFn = PrevToken;
			LastFnPos = prev_token_pos;
						
			LeftParens = 0;
			RightParens = 0;
			FnParamNr = 1;
		}
		
		// keep track of parenteses to see if fn is closed
		if(CurToken == "(" && tok_type == T_SYMBOL)
			LeftParens++;
		else if(CurToken == ")" && tok_type == T_SYMBOL)
			RightParens++;
		else if(CurToken == "," && tok_type == T_SYMBOL)
			FnParamNr++;
			
		// mark if fn is open
		if(LeftParens > RightParens && ! LastFn.empty() )
		{
			CursorInParameters = 1;
		}
		else // fn closed
		{
			if( ! FnStack.empty() )
			{
				// get previous fn call
				LastFn = FnStack.top()->Name;
				LastFnPos = FnStack.top()->pos;
				LeftParens = FnStack.top()->LeftParens;
				RightParens = FnStack.top()->RightParens;
				FnParamNr = FnStack.top()->ParamNr;
				
				delete(FnStack.top());
				FnStack.pop();
			}
			else
			{
				LastFn = "";
				CursorInParameters = 0;
			}
		}
		
		prev_type = tok_type;
		prev_pos = pos;
	}

}
/*=============================================================================
	CurrentLine
=============================================================================*/
int TextEditor::CurrentLine(int pos)
{
	if(pos < 0) pos = this->insert_position();
	return this->buffer()->count_lines(0, pos );
}

/*=============================================================================
	LineStart
=============================================================================*/
int TextEditor::LineStart(int pos)
{
	if(pos < 0) pos = this->insert_position();
	int PrevLine = this->CurrentLine(pos);
	
	while( pos >= 0 && this->CurrentLine(pos) == PrevLine)
		pos--;
	
	return (pos+1);
}

/*=============================================================================
	LineEnd
=============================================================================*/
int TextEditor::LineEnd(int pos)
{
	if(pos < 0) pos = this->insert_position();
	
	int PrevLine = this->CurrentLine(pos);
	
	while( pos < this->buffer()->length() && this->CurrentLine(pos) == PrevLine)
		pos++;
	
	return (pos-1);
}

/*=============================================================================
	LineText
=============================================================================*/
string TextEditor::LineText(int pos)
{
	string ret;
	int s,e;
	if(pos < 0) pos = this->insert_position();
	
	s = LineStart(pos);
	e = LineEnd(pos);
	
	return this->GetText(s, e);
}
