#include "MainWindow.h"

#if defined(WIN32)
	#define ICONFILE "editor.ico"
#else
	#include "X11/xpm.h"
	#include "icons/editor.xpm"
#endif

/*=============================================================================
	MainWindow
=============================================================================*/
MainWindow::MainWindow(int w, int h, const char *title)
: Fl_Double_Window(w, h, title)
{ 
	this->begin(); 
 
	this->menu = new MainMenu(0, 0, w, 20);
	this->menu->textsize(11);
		
	this->OpenFileList = new FileList(0, 20, (int)(w*0.3), (int)(h*0.4)-20 );
	this->OpenFileList->textsize(12);
	
	this->CurFnList = new FnList(0, (int)(h*0.4)+3, (int)(w*0.3), (int)(h*0.6)-20);
	this->CurFnList->textsize(12);
	
  this->LineNo = new Fl_Output(0, h - 20, (int)(w*0.3), 20);
  this->LineNo->textsize(12);
  this->LineNo->color(FL_GRAY);
  
	this->Editor = new TextEditor((int)(w*0.3)+3, 20, (int)(w*0.7), h - 20);
	this->Editor->buffer()->tab_distance( 2 );
	this->Editor->end();
	
  this->resizable(this->Editor);
 		
	this->Browser = new CodeSelect(0, 40, 260, 100);
	this->Browser->textsize(12);
	this->Browser->hide();
  this->Browser->end();

	this->Params = new ParamBox(1, 1, 1, 1);
	this->Params->color( fl_color_cube(255*FL_NUM_RED/256, 232*FL_NUM_GREEN/256, 162*FL_NUM_BLUE/256) );
	this->Params->textsize(12);
	this->Params->hide();
		   	
	this->end();

	SetIcon();
}

/*=============================================================================
	~MainWindow
=============================================================================*/
MainWindow::~MainWindow()
{

}
/*=============================================================================
	SetIcon
=============================================================================*/
void MainWindow::SetIcon()
{
#if defined(WIN32)
	// Set Icon for opened window
  HINSTANCE hInst = fl_display;
	HWND hWnd = fl_xid(this); // = fl_window;
		
	HICON	m_hIconBig = (HICON) LoadImage(hInst, ICONFILE,IMAGE_ICON, 16, 16,LR_LOADFROMFILE); 
	SendMessage(hWnd, WM_SETICON, 0, (long)m_hIconBig);
#else
	fl_open_display();
	Pixmap p, mask;
	XpmCreatePixmapFromData(fl_display, DefaultRootWindow(fl_display), editor, &p, &mask, NULL);
	this->icon( (char*)p );
#endif
// for win set icon after window open in Show()
}
/*=============================================================================
	CreateReplaceDlg
=============================================================================*/
int MainWindow::CreateReplaceDlg()
{
	ReplaceDlg = new Fl_Window(300, 105, "Replace");
	
	Fl_Input *replace_find = new Fl_Input(70, 10, 200, 25, "Find:");
	Fl_Input *replace_with = new Fl_Input(70, 40, 200, 25, "Replace:");
	Fl_Button *replace_all = new Fl_Button(10, 70, 90, 25, "Replace All");
	Fl_Button *replace_next = new Fl_Button(105, 70, 120, 25, "Replace Next");
	Fl_Button *replace_cancel = new Fl_Button(230, 70, 60, 25, "Cancel");
	
	ReplaceDlg->end();
}
/*=============================================================================
	Show
=============================================================================*/
void MainWindow::Show(int argc, char **argv)
{
	int i;
 	string PrevDir, FuncsVarsSro;
 	Timer timer;
 	
	//show window
	Fl_Window::show();
	
	this->SetIcon(); // for win
	
	string File = argv[0]; // this executable file
	Executable = File;
	
	LockFile = NormPath(FileDir(Executable) + LOCK_FILE);
	DefProject = NormPath(FileDir(Executable) + DEFAULT_PROJECT);
	FuncsVarsSro = NormPath(FUNCS_VARS_SRO);
	
	PrevDir = CurDir();
	if( IsDir( FileDir(File) )) ChDir( FileDir(File) );	
	
	if( IsReadable(FuncsVarsSro) )
	{
		timer.start();
		this->CodeMan.deserialize(FuncsVarsSro);
		timer.end();
		printf("Deser duration: %f\n", timer.val() );
	}
	else
	{
		timer.start();
		this->CodeMan.ParseFile(NormPath(FUNCTIONS)); // load functions
		this->CodeMan.GlobalVariables.clear(); // drop parameters of fns
		this->CodeMan.ParseFile(NormPath(VARIABLES)); // load variables
		timer.end();
		printf("Parse duration: %f\n", timer.val() );
		this->CodeMan.serialize(FuncsVarsSro);
	}
	
	ChDir(PrevDir); // get back
	
	for(i = 1; i < argc; i++) // open files in cmdline		
		this->OpenFile( argv[i] );
		
	if( i == 1) // no files
		this->OpenFile(DefProject);
		
	this->Editor->take_focus();
	this->Editor->show_insert_position();
	
	Fl::dnd_text_ops(1); // allow Drag n Drop
	
	Fl::add_check( &idle_cb, (void*) this );
}

/*=============================================================================
	handle
=============================================================================*/
int MainWindow::handle(int event)
{
	static bool resizing;
	static bool resizing_fn;
	
	switch(event)
	{
	 case FL_KEYDOWN:
	 		if( (Fl::event_state() | FL_CTRL) == Fl::event_state() ) // CTRL + 
	 		{
				if(Fl::event_key() == 'f') // doesn't open win form shortcuts
					this->FindAndReplace();
				//else if( Fl::event_key() == 'w' )
					//this->CloseFile();
	 		}	
			
			if(Fl::event_key() == FL_Escape) 
   			return 1; // don't close		
   	break;
		  
		case FL_MOVE:
			if( Fl::event_x() >=  this->OpenFileList->x() +  this->OpenFileList->w() - 2
																						&& Fl::event_x() <=  this->Editor->x() + 2 )
			{
				this->cursor(FL_CURSOR_WE);
				resizing = 1;
			}
			else if( Fl::event_y() <= CurFnList->y() && Fl::event_y() >= OpenFileList->y()+OpenFileList->h() 
					&&  Fl::event_x() <=  CurFnList->x()+ CurFnList->w() )
			{
				this->cursor(FL_CURSOR_NS);
				resizing_fn = 1;
			}
			else
			{
				if(resizing || resizing_fn)
				{
					this->cursor(FL_CURSOR_DEFAULT);
					resizing = 0;
					resizing_fn = 0;
				}
			}
		break;
		
		case FL_DRAG:
			if( resizing && Fl::event_x() > 5 ) // resizing file list 
			{		
				Editor->resize(Fl::event_x(), Editor->y(), w()-Fl::event_x(), Editor->h() );
				OpenFileList->resize(OpenFileList->x(), OpenFileList->y(), Fl::event_x()-3,OpenFileList->h());
				CurFnList->resize(CurFnList->x(), CurFnList->y(), Fl::event_x()-3, CurFnList->h() );
				LineNo->resize(OpenFileList->x(), LineNo->y(), OpenFileList->w(), LineNo->h() );
				this->redraw();
			}
			else if( resizing_fn && Fl::event_y() > 5)
			{
				OpenFileList->resize(OpenFileList->x(), OpenFileList->y(), OpenFileList->w(),
					Fl::event_y()-OpenFileList->y() );
				CurFnList->resize(CurFnList->x(), OpenFileList->y()+OpenFileList->h()+2, CurFnList->w(),
				 	LineNo->y()-(OpenFileList->y()+OpenFileList->h()+2)-2 );
				this->redraw();
			}
		break;
		
		case 9:
			if( (Fl::event_state() | FL_CTRL) == Fl::event_state() )
			{
				if(Fl::event_key() == FL_Up)
				{
					this->FindPrev("function", T_KEYWORD);
					return 0;
				}
				else if(Fl::event_key() == FL_Down)
				{
					this->FindNext("function", T_KEYWORD);
					return 0;
				}
			}
		break;
	
	}
			
	return Fl_Double_Window::handle(event);
}

/*=============================================================================
	Shortcut
=============================================================================*/
int MainWindow::Shortcut(ulong shortcut)
{
	switch(shortcut)
	{ 
		case FL_CTRL + 's':
			this->SaveFile();
		break;
		
		case FL_CTRL + 'o':
			this->OpenFile();	
		break;
		
		case FL_CTRL + FL_SHIFT + 's':
			this->SaveFile(1);
		break;
		
		case FL_CTRL + 'l':
			this->OpenFileList->SaveList("");
		break;
		
		case FL_CTRL + 'n':
			this->NewFile();
		break;
		
		case FL_CTRL + 'g':
			this->GoToLine();
		break;
		
		case FL_CTRL + 'w':
			this->CloseFile();
		break;
		
		case FL_CTRL + 'f':
			this->FindAndReplace();
		break;
		
		case FL_CTRL + 'd':
			this->GoToDefinition( this->Editor->insert_position() );
		break;
		
		case FL_CTRL + 'i':
			this->OpenIncludeFile( this->Editor->insert_position() );
		break;
		
		case FL_CTRL + 'e':
			this->Editor->InsertEcho();
		break;
		
		case FL_CTRL + 'k':
			this->ChooseColor();
		break;
		
		case (FL_F + 3):  // F3 
			this->FindNext();
		break;
		
		case FL_ALT + (FL_F + 4):  // ALT+F4
			this->hide();
		break;
		
		case FL_CTRL + FL_Up:
			this->FindPrev("function", T_KEYWORD);
		break;
		
		case FL_CTRL + FL_Down:
			this->FindNext("function", T_KEYWORD);
		break;
		
		case FL_ALT + FL_Up:
				if( OpenFileList->value() > 1 ) 	{ 
					int prev = OpenFileList->Index();
					OpenFileList->select( OpenFileList->value()-1 );
					this->FileSwitched(prev);
				}	
		break;
		
		case FL_ALT + FL_Down:
		 		if( OpenFileList->value() < OpenFileList->size() )	{
					int prv = OpenFileList->Index();
					OpenFileList->select( OpenFileList->value()+1 );
					this->FileSwitched(prv);
				}	
		break;
		
		case FL_CTRL + 'r':
			printf("Replace\n");
		break;
	}		
	
	return 1;
}

/*=============================================================================
	ChooseColor
=============================================================================*/
void MainWindow::ChooseColor()
{
	uchar r = 255, g = 255, b = 255;
	int ir,ig,ib,n=0;
	const char title[] = "Choose color";
	char first_char, hexval[9];
	
	if( this->Editor->TextBuf->selected() )
	{
		char *sel = this->Editor->TextBuf->selection_text();
		first_char = sel[0];
							
		if( first_char == '#' )
			n = sscanf( sel, "#%02X%02X%02X", &ir, &ig, &ib); 
		else		
			n = sscanf( sel, "%02X%02X%02X", &ir, &ig, &ib);
		
		if( n == 3)
		{
			r = ir;
			g = ig;
			b = ib;
		}
		free(sel);
	}
	
	if( fl_color_chooser(&title[0], r, g, b) )
	{
		if( first_char == '#' )
			sprintf(&hexval[0], "#%02X%02X%02X\0", r, g, b);
		else
			sprintf(&hexval[0], "%02X%02X%02X\0", r, g, b);
		
		if( this->Editor->TextBuf->selected() )
			this->Editor->TextBuf->replace_selection(hexval);
		else
			this->Editor->insert(hexval);
	}
}
/*=============================================================================
	ShowBrowser
=============================================================================*/
void MainWindow::ShowBrowser()
{
	int x, y, var_start_pos;
	string VarName, ItemDisp;
	Class* ObjClass = NULL;

	printf("show browser\n");

	Editor->take_focus();
	Editor->position_xy(&x, &y);
	
	Browser->Clear();
	
	Editor->TextBuf->search_backward(Editor->insert_position(), "$", &var_start_pos, 0);
	VarName = Editor->TextBuf->text_range(var_start_pos, Editor->insert_position()-2);

	if( VarName == "$this")
		ObjClass = this->CodeMan.GetCurClass(
			this->OpenFileList->CurrentFile()->FilePath,
			this->Editor->insert_position() );
	else
		ObjClass = this->CodeMan.GetObjClass(VarName);
	
	if( ! ObjClass ) return;
	
	string BaseClass = ObjClass->BaseClassName;
	
	Browser->Key = "C_" + ObjClass->Name;
		
	VariableMap::iterator i;
	for(i = ObjClass->Variables.begin(); i != ObjClass->Variables.end(); i++)
		Browser->Add(i->first.c_str(), (void*) &(i->second) ); // add item names
	
	if( ! BaseClass.empty() )
	{
		VariableMap::iterator i;
		for(i = CodeMan.Classes[BaseClass].Variables.begin(); i != CodeMan.Classes[BaseClass].Variables.end(); i++)
			Browser->Add(i->first.c_str(), (void*) &(i->second) ); // add item names
	}
		
	FunctionMap::iterator j;
	for(j = ObjClass->Functions.begin(); j != ObjClass->Functions.end(); j++)
		Browser->Add(j->first.c_str(), (void*) &(j->second) ); // add item names
	
	if( ! BaseClass.empty() )
	{			
		FunctionMap::iterator j;
		for(j = CodeMan.Classes[BaseClass].Functions.begin(); j != CodeMan.Classes[BaseClass].Functions.end(); j++)
			Browser->Add(j->first.c_str(), (void*) &(j->second) ); // add item names
	}
	
	if(Browser->size() > 0)
	{
		Browser->resize(x, y+15, Browser->w(), Browser->h());
 		Browser->Show();
		Browser->activate();
		Browser->take_focus();
		Browser->redraw();
		Browser->select(1);
	}
}
/*=============================================================================
	ShowClassBrowser
=============================================================================*/
void MainWindow::ShowClassBrowser(string ClassName)
{
	int x, y, var_start_pos;
	string VarName, ItemDisp;

	printf("show class browser for '%s'\n", ClassName.c_str() );

	Editor->take_focus();
	Editor->position_xy(&x, &y);
	
	Browser->Clear();

	if(this->CodeMan.Classes.count(ClassName) == 0) return;
	
	Browser->Key = "C_" + ClassName;

	FunctionMap::iterator j;
	for(j = CodeMan.Classes[ClassName].Functions.begin(); j != CodeMan.Classes[ClassName].Functions.end(); j++)
		Browser->Add(j->first.c_str(), (void*) &(j->second) ); // add item names

	// populate with base class items
	string BaseClass = CodeMan.Classes[ClassName].BaseClassName;
		
	if( ! BaseClass.empty() )
	{			
		FunctionMap::iterator j;
		for(j = CodeMan.Classes[BaseClass].Functions.begin(); j != CodeMan.Classes[BaseClass].Functions.end(); j++)
			Browser->Add(j->first.c_str(), (void*) &(j->second) ); // add item names	
	}
			
	if(Browser->size() > 0)
	{
		Browser->resize(x, y+15, Browser->w(), Browser->h());
 		Browser->Show();
		Browser->activate();
		Browser->take_focus();
		Browser->redraw();
		Browser->select(1);
	}
}
/*=============================================================================
	ShowFuncBrowser
=============================================================================*/
int MainWindow::ShowFuncBrowser(string FnNameStart)
{
	// show a list of functions, that begin with FnNameStart
	int x, y, Shown = 0;
		
	printf("show func browser for '%s', Key: '%s'\n", FnNameStart.c_str(), Browser->Key.c_str() );
		
	if( ! Browser->Key.empty() && ("F_" + FnNameStart).find(Browser->Key) == 0 && Browser->size() == 0) // previous search had no results
	{
		printf("previous search had no results\n");
		Shown = 0;
	}
	else if(Browser->Key != "F_" + FnNameStart)
	{
		printf("populating\n");
		
		Browser->Clear();
	
		FunctionMap::iterator j;
		for(j = this->CodeMan.GlobalFunctions.begin(); j != this->CodeMan.GlobalFunctions.end(); j++)
		{
			if( j->first.find( FnNameStart ) == 0 )
				Browser->Add(j->first.c_str(), (void*) &(j->second) ); // add item names
		}
		
		ClassMap::iterator k; 
		for(k = this->CodeMan.Classes.begin(); k != this->CodeMan.Classes.end(); k++)
		{
			if( k->first.find( FnNameStart ) == 0 )
				Browser->Add(k->first.c_str(), 0 ); 
		}
		
		Browser->Key = "F_" + FnNameStart;
	}
	
	if(Browser->Size() == 1 && Browser->Item(0)->Text == FnNameStart) // have only current item
	{
		Shown = 0;
	}
	else if(Browser->Size() > 0)
	{
		Editor->take_focus();
		Editor->position_xy(&x, &y); // get position
				
		Browser->resize(x, y+15, Browser->w(), Browser->h());
		
 		Browser->Show( Editor->insert_position() - FnNameStart.length() );
		Browser->activate();
		Browser->take_focus();
		Browser->redraw();
		Browser->select(1);
						
		Shown = 1;
	}
	
	printf("Showing?: %d\n", Shown);
			
	return Shown;
}
/*=============================================================================
	ShowVarBrowser
=============================================================================*/
int MainWindow::ShowVarBrowser(string VarNameStart)
{
	// show a list of functions, that begin with FnNameStart
	int x, y, Shown = 0;
		
	printf("show var browser for '%s'\n", VarNameStart.c_str() );
	
	if( ! Browser->Key.empty() && ("V_" + VarNameStart).find(Browser->Key) == 0 && Browser->size() == 0) // previous search had no results
	{
		Shown = 0;
	}
	else if(Browser->Key != "V_" + VarNameStart)
	{
		Browser->Clear();
		
		VariableMap::iterator j;
		for(j = this->CodeMan.GlobalVariables.begin(); j != this->CodeMan.GlobalVariables.end(); j++)
		{
			if( j->first.find( VarNameStart ) == 0 )
				Browser->Add(j->first.c_str(), (void*) &(j->second) ); // add item names
		}	
		Browser->Key = "V_" + VarNameStart;
	}
	
	if(Browser->size() == 1 && Browser->Item(0)->Text == VarNameStart) // have only current item
	{
		Shown = 0;
	}
	else if(Browser->size() > 0)
	{
		Editor->take_focus();
		Editor->position_xy(&x, &y); // get position
		
		Browser->resize(x, y+15, Browser->w(), Browser->h());
 		Browser->Show( Editor->insert_position() - VarNameStart.length() );
		Browser->activate();
		Browser->take_focus();
		Browser->redraw();
		Browser->select(1);
						
		Shown = 1;
	}
			
	return Shown;
}
/*=============================================================================
	ShowArrayBrowser
=============================================================================*/
int MainWindow::ShowArrayBrowser(string VarName)
{
	// show a list of functions, that begin with FnNameStart
	int x, y, l, i, var_start_pos, var_end_pos, Shown = 0, show_consts = 0;
	char endch;
	string ArrayKey;
			
	if( VarName.empty() )
	{
		Editor->TextBuf->search_backward(Editor->insert_position(), "$", &var_start_pos, 0);
		Editor->TextBuf->search_backward(Editor->insert_position(), "[", &var_end_pos, 0);
		VarName = Editor->TextBuf->text_range(var_start_pos, var_end_pos);
	}
	
	endch = Editor->TextBuf->character(var_end_pos+1);
	if( endch == '\'' || endch == '"')
		show_consts = 0;
	else
		show_consts = 1;
	
	printf("show arr browser for var '%s', consts: %d, endch: '%c'\n", VarName.c_str(), show_consts, endch );
	
	if( this->CodeMan.GlobalVariables.count(VarName) == 0) printf("Var not found\n");
	else if(Browser->Key != "A_" + VarName)
	{		
		Browser->Clear(); 
		
		if( show_consts )
		{
			l = this->CodeMan.GlobalVariables[VarName].ConstArrayKeys.size();
						
			for(i = 0; i < l; i++)
			{
			  ArrayKey = this->CodeMan.GlobalVariables[VarName].ConstArrayKeys[i];
			  Browser->Add(ArrayKey.c_str(), NULL ); // add item names
		  }
		  Browser->Key = "K_" + VarName;
		}
		else
		{
			l = this->CodeMan.GlobalVariables[VarName].ArrayKeys.size();
						
			for(i = 0; i < l; i++)
			{
			  ArrayKey = this->CodeMan.GlobalVariables[VarName].ArrayKeys[i];
			  Browser->Add(ArrayKey.c_str(), NULL ); // add item names
		  }
			Browser->Key = "A_" + VarName;
		}
		
	}
	
	if(Browser->size() > 0)
	{
		Editor->take_focus();
		Editor->position_xy(&x, &y); // get position
		
		Browser->resize(x, y+15, Browser->w(), Browser->h());
 		Browser->Show( Editor->insert_position() );
		Browser->activate();
		Browser->take_focus();
		Browser->redraw();
		Browser->select(1);
		Shown = 1;
	}
			
	return Shown;
}
/*=============================================================================
	ShowFuncParams
=============================================================================*/
void MainWindow::ShowFuncParams(string FnName, int FnPos, int ParamNr)
{
	int obj_name_start, obj_name_end;
	int cls_name_start, cls_name_end;
	int x, y, posx, posy, found = 0;
	string Tmp, ObjName, ClsName;
  string TooltipText;
	Function Fn;
	Class* ObjClass = NULL;
   
 //is it a method of a class
 if(FnPos > 1)
 	Tmp = Editor->TextBuf->text_range(FnPos - 2, FnPos);
	 
 if(Tmp == "->") // if is, then get the object name
 {
 	 obj_name_start = Editor->TextBuf->word_start(FnPos - 3);
 	 obj_name_end = Editor->TextBuf->word_end(FnPos - 3);
 	 ObjName = Editor->TextBuf->text_range(obj_name_start, obj_name_end);
 }
 else if(Tmp == "::")
 {
 	 cls_name_start = Editor->TextBuf->word_start(FnPos - 3);
 	 cls_name_end = Editor->TextBuf->word_end(FnPos - 3);
 	 ClsName = Editor->TextBuf->text_range(cls_name_start, cls_name_end);
 }
 
 TooltipText = "";
 
 // show function parameters
 if( ! ObjName.empty()  )
 {
 		if( ObjName == "this" )
			ObjClass = this->CodeMan.GetCurClass(
				this->OpenFileList->CurrentFile()->FilePath,
				this->Editor->insert_position() );
		else
 			ObjClass = this->CodeMan.GetObjClass("$" + ObjName);;
		
		if( ObjClass )	
 			ClsName = ObjClass->Name;
 }
 
 if( ! ClsName.empty() )
 {
 		if( this->CodeMan.Classes.count(ClsName) > 0 )
		{		
			if( this->CodeMan.Classes[ClsName].Functions.count(FnName) > 0 )
			{
				Fn = this->CodeMan.Classes[ClsName].Functions[FnName];
				found = 1;
			}
			else
			{
				string BaseClass = this->CodeMan.Classes[ClsName].BaseClassName;
				if( this->CodeMan.Classes[BaseClass].Functions.count(FnName) > 0 )
				{
					Fn = this->CodeMan.Classes[BaseClass].Functions[FnName];
					found = 1;
				}
			}
		}
 }
 else // regular function 
 {
 		if( this->CodeMan.GlobalFunctions.count(FnName) > 0 )
		{
 			Fn = this->CodeMan.GlobalFunctions[FnName];
			found = 1;
		}
		else // maybe constructor
		{			
			if( this->CodeMan.Classes.count(FnName) > 0 )
			{
				if(this->CodeMan.Classes[FnName].Functions.count(FnName) > 0 )
				{
					Fn = this->CodeMan.Classes[FnName].Functions[FnName];
					found = 1;
				}
			}
		}
 }

 // show the parameter window
 if( found )
 { 		
 		Editor->position_xy(&x, &y, FnPos); // fn name position
  	Editor->position_xy(&posx, &posy); // insert position
   	
		Params->hide();
		
		if( x > (int)(this->w()*1/3) )
			x = this->w()*1/3;
		
		Params->resize(posx, posy, this->w(), 20);	
		
  	Params->value( Fn, ParamNr );
    Params->Show(posx);
 }
 
}
/*=============================================================================
	GoToDefinition
=============================================================================*/
void MainWindow::GoToDefinition( int FnAtPos )
{
	int obj_name_start, obj_name_end;
	int cls_name_start, cls_name_end;
	int fn_name_start, fn_name_end;
	int x, y, FnPos, found = 0;
	string Tmp, ObjName, ClsName, FnName;
	Function Fn;
	
  fn_name_start = Editor->TextBuf->word_start(FnAtPos );
  fn_name_end = Editor->TextBuf->word_end(FnAtPos);
  FnName = Editor->TextBuf->text_range(fn_name_start, fn_name_end);
	FnPos = fn_name_start;
 			
	if( ! fl_ask("Go to definition of '%s' ?", FnName.c_str()) ) return;
  
  // class definition 
  if(this->CodeMan.Classes.count(FnName) > 0)
  {
		if( this->CodeMan.Classes[FnName].Functions.count(FnName) > 0 ) // constructor
		{
			Fn = this->CodeMan.Classes[FnName].Functions[FnName];
			found = 1;
		}
		else
		{
  		this->OpenFile(this->CodeMan.Classes[FnName].LocationFile);
 	  	this->GoToLine(this->CodeMan.Classes[FnName].LineNo);
 	  	return;
		}
  }
      
	// is it a method of a class
 	if(FnPos > 1)
 		Tmp = Editor->TextBuf->text_range(FnPos - 2, FnPos);
	   
 if(Tmp == "->") // if is, then get the object name
 {
 	 obj_name_start = Editor->TextBuf->word_start(FnPos - 3);
 	 obj_name_end = Editor->TextBuf->word_end(FnPos - 3);
 	 ObjName = Editor->TextBuf->text_range(obj_name_start, obj_name_end);
 }
 else if(Tmp == "::")
 {
 	 cls_name_start = Editor->TextBuf->word_start(FnPos - 3);
 	 cls_name_end = Editor->TextBuf->word_end(FnPos - 3);
 	 ClsName = Editor->TextBuf->text_range(cls_name_start, cls_name_end);
 }
  
 if( ! ObjName.empty()  )
 {
 		Class* ObjClass = this->CodeMan.GetObjClass("$" + ObjName);;
 		ClsName = ObjClass->Name;	
 }
 
 if( ! ClsName.empty() )
 {
 		if( this->CodeMan.Classes.count(ClsName) > 0 )
		{		
			if( this->CodeMan.Classes[ClsName].Functions.count(FnName) > 0 )
			{
				Fn = this->CodeMan.Classes[ClsName].Functions[FnName];
				found = 1;
			}
			else
			{
				string BaseClass = this->CodeMan.Classes[ClsName].BaseClassName;
				if( this->CodeMan.Classes[BaseClass].Functions.count(FnName) > 0 )
				{
					Fn = this->CodeMan.Classes[BaseClass].Functions[FnName];
					found = 1;
				}
			}
		}
 }
 else if( this->CodeMan.GlobalFunctions.count(FnName) > 0 )
 {
 		Fn = this->CodeMan.GlobalFunctions[FnName];
		found = 1;
 }
 
 if( found && ! Fn.LocationFile.empty() && Fn.LineNo > 0 )
 {
 	 this->OpenFile(Fn.LocationFile);
 	 this->GoToLine(Fn.LineNo);
 }
 else
 	fl_message("Definition not found!");
}
/*=============================================================================
	FindNext
=============================================================================*/
int MainWindow::FindNext(string SearchString, char TokenType, int StartPos)
{
	int found = 0, foundPos;
	char StyleChar;
	
	if( StartPos < 0 ) StartPos = this->Editor->insert_position();
	
	found = this->Editor->buffer()->search_forward(StartPos+1, SearchString.c_str(), &foundPos);
	if(found)
		StyleChar = this->Editor->StyleBuf->character(foundPos);
	
	while( found && StyleChar != TokenType )
  {
  	found = this->Editor->buffer()->search_forward(foundPos+1, SearchString.c_str(), &foundPos);
 		if(found) {
  		StyleChar = this->Editor->StyleBuf->character(foundPos);
		}
  }
  
  if( found && StyleChar == TokenType )
  {
  	this->GoToLine( this->Editor->CurrentLine(foundPos)+1 ); 
  	this->Editor->insert_position(foundPos);
  	return 1;
 	}
 	
 	return 0;
}
/*=============================================================================
	FindPrev
=============================================================================*/
int MainWindow::FindPrev(string SearchString, char TokenType, int StartPos)
{
	int found, foundPos;
	char StyleChar;
	
	if( StartPos < 0 ) StartPos = this->Editor->insert_position();
	
	found = this->Editor->buffer()->search_backward(StartPos, SearchString.c_str(), &foundPos);
	if(found)
		StyleChar = this->Editor->StyleBuf->character(foundPos);
	
	while( found && StyleChar != TokenType )
  {
  	found = this->Editor->buffer()->search_backward(foundPos, SearchString.c_str(), &foundPos);
 		if(found)
  		StyleChar = this->Editor->StyleBuf->character(foundPos);
  }
  
  if( found && StyleChar == TokenType )
  {
  	this->GoToLine( this->Editor->CurrentLine(foundPos)+1 ); 
  	this->Editor->insert_position(foundPos);
  	return 1;
 	}
 	
 	return 0;
}
/*=============================================================================
	BrowserFnChanged
=============================================================================*/
int MainWindow::BrowserFnChanged(Function* Fn)
{
	// callback fn from CodeSelect class
	int x, y;
	
	// show the parameter window
	x = this->Browser->x() + Browser->w();
	y = this->Browser->y() + Browser->h();
	
	
	printf("BrowserFnChanged.\n");
	printf("Name: %s\n", Fn->Name.c_str());
	printf("JavaDoc: %s\n", Fn->JavaDoc.c_str() );
			
	Function ShowFn;
	ShowFn.Name = Fn->Name;
	ShowFn.JavaDoc = Fn->JavaDoc;
	ShowFn.Parameters = Fn->Parameters;
	
	Params->hide();
	Params->resize(x, y, this->w()*2, 20);	
  Params->value( ShowFn, 0 );
  Params->Show(); 
}
/*=============================================================================
	InsertText
=============================================================================*/
void MainWindow::InsertText(const char* Text)
{
	Editor->insert(Text);
	Editor->take_focus();
}
/*=============================================================================
	OpenIncludeFile
=============================================================================*/
int MainWindow::OpenIncludeFile( int Pos )
{
	int start_pos, end_pos;
	string File, PrevDir;
	
	start_pos = Pos;
	while( start_pos >= 0 && Editor->StyleBuf->character(start_pos) == T_STRING )
		start_pos--;
		
	end_pos = Pos;
	while( end_pos < Editor->StyleBuf->length() &&
				 Editor->StyleBuf->character(end_pos) == T_STRING )
		end_pos++;
	
	if( end_pos - start_pos - 3 <= 0 ) return 0;
	
	File = Editor->GetText( start_pos+2, end_pos-1 );
	
	if( File.empty() ) return 0;
	if( ! fl_ask("Open file '%s' ?", File.c_str()) ) return 0; 
	
	PrevDir = CurDir();
	if( IsDir( FileDir(this->OpenFileList->CurrentFile()->FilePath) ) )
		ChDir( FileDir(this->OpenFileList->CurrentFile()->FilePath) );
	
	this->OpenFile(File);
	
	ChDir(PrevDir);
	
	return 1;
}
/*=============================================================================
	OpenFile (char*)
=============================================================================*/
int MainWindow::OpenFile(char* NewFile)
{
	string FilePath;

	if(NewFile) FilePath = NewFile;
	
	OpenFile(FilePath);
}
/*=============================================================================
	OpenFile (string)
=============================================================================*/
int MainWindow::OpenFile(string NewFile)
{
	string FilePath;
	char *File;
	static string LastOpenedFile;
		
	if(this->OpenFileList->CurrentFile())
		LastOpenedFile = this->OpenFileList->CurrentFile()->FilePath;
	
	if( NewFile.empty() )
	{
		File =	fl_file_chooser("Open file", "", FileDir(LastOpenedFile).c_str() );
		if(File) NewFile = File;
	}
	
	if( ! NewFile.empty() )
	{
		FilePath = NewFile;
		FilePath = NormPath(FilePath);
		
		if( FileExt(FilePath) == ".pfl" )
		{
			printf("Opening project: %s\n", FilePath.c_str() );
			OpenProject(FilePath.c_str());
		}
		else
		{
			printf("Opening file: '%s', from dir '%s'\n", FilePath.c_str(), CurDir().c_str() );
			
			if( ! IsReadable(FilePath) ) fl_message("Can't open '%s'", FilePath.c_str() );
			
			this->OpenFileList->Add(FilePath);
			this->CodeMan.ParseFile( this->OpenFileList->CurrentFile()->FilePath );
			this->CurFnList->Populate(CodeMan.GlobalFunctions,
				CodeMan.Classes,
				this->OpenFileList->CurrentFile()->FilePath );
				
			this->Editor->ChangeFile( this->OpenFileList->CurrentFile() ); // load file buffer into editor
			this->OpenFileList->CurrentFile()->saved = true;
			this->OpenFileList->Refresh();
			LastOpenedFile = FilePath;
		}
	}
}
/*=============================================================================
	OpenProject
=============================================================================*/
int MainWindow::OpenProject(const char* ProjectFile)
{
	string Line;
	string PrevDir;
	string Project;
	
	std::ifstream projf(ProjectFile);
	
	if( ! projf ) return 0;
	
	Project = AbsolutePath(ProjectFile);
	PrevDir = CurDir();
	if( IsDir( FileDir(Project) )) ChDir( FileDir(Project) );	
	
	while( ! std::getline(projf, Line).eof() )
	{
		if( Line[Line.length()-1] == '\n' ) Line = Line.substr(0, Line.length()-1);
		if( Line[Line.length()-1] == '\r' ) Line = Line.substr(0, Line.length()-1);
		
		if( ! Line.empty() )
		{
			ChDir( FileDir(Project)); // loses
			OpenFile(Line);
		}
	}
	
	projf.close();
	ChDir(PrevDir);
}
/*=============================================================================
	SaveFile
=============================================================================*/
int MainWindow::SaveFile(int save_as)
{
	if(this->OpenFileList->CurrentFile())
	{		
		this->OpenFileList->CurrentFile()->UpdateBuffer( this->Editor->buffer() );
		int save_ret = this->OpenFileList->CurrentFile()->Save(save_as);
		this->OpenFileList->Refresh();
		this->CodeMan.ParseFile( this->OpenFileList->CurrentFile()->FilePath );
		this->CurFnList->Populate(CodeMan.GlobalFunctions,
			CodeMan.Classes,
			this->OpenFileList->CurrentFile()->FilePath );
			
		if(save_ret == 2) // reload file buffer into editor
			this->Editor->ChangeFile( this->OpenFileList->CurrentFile() ); 
		
	}
}
/*=============================================================================
	CloseFile
=============================================================================*/
int MainWindow::CloseFile()
{ 
	if(this->OpenFileList->CurrentFile())
	{
	 this->CodeMan.RemoveFileInfo( this->OpenFileList->CurrentFile()->FilePath );
	 this->OpenFileList->CurrentFile()->UpdateBuffer( this->Editor->buffer() );
	 this->OpenFileList->Remove(); // changes OpenFileList->CurrentFile()
  }
	
	if( this->OpenFileList->CurrentFile() ) // still have a file
	{
	 this->Editor->ChangeFile( this->OpenFileList->CurrentFile() );
	 this->CurFnList->Populate(CodeMan.GlobalFunctions,
 	 																CodeMan.Classes,
		 	 														this->OpenFileList->CurrentFile()->FilePath );
	
	this->OpenFileList->Refresh();
	this->Editor->take_focus();
	this->Editor->show_insert_position();
 }
 else
 {
 	this->Editor->TextBuf->text("");
 	this->CurFnList->Clear();
 }
}
/*=============================================================================
	NewFile
=============================================================================*/
int MainWindow::NewFile()
{
	this->OpenFileList->Add("");
}
/*=============================================================================
	CurFileChanged
=============================================================================*/
int MainWindow::CurFileChanged()
{
	if(this->OpenFileList->CurrentFile() && this->OpenFileList->CurrentFile()->saved == 1)
	{
		this->OpenFileList->CurrentFile()->saved = 0;
		this->OpenFileList->Refresh();
	}
}
/*=============================================================================
	LineChanged
=============================================================================*/
int MainWindow::LineChanged()
{
	char buf[50];
	int CurLine = this->Editor->CurrentLine();
	int LineStartPos = this->Editor->line_start( this->Editor->insert_position() );
	int PosInLine = this->Editor->insert_position() - LineStartPos;
	
	sprintf(&buf[0], " %d", CurLine+1 );
	this->LineNo->value( buf );	
}
/*=============================================================================
	FileSwitched
=============================================================================*/
int MainWindow::FileSwitched(int PrevFileIndex)
{	
	int start, end;
	
	// update previous file
	if(PrevFileIndex >= 0)
	{
		this->OpenFileList->Files[PrevFileIndex]->insert_position = this->Editor->insert_position();
		this->OpenFileList->Files[PrevFileIndex]->TopLine = this->Editor->TopLine();
				
		if( this->Editor->TextBuf->selected() )
			this->Editor->TextBuf->selection_position(&start, &end);
		else
		{
			start = 0;
			end = 0;
		}
		
		this->OpenFileList->Files[PrevFileIndex]->SelectionStart = start;
		this->OpenFileList->Files[PrevFileIndex]->SelectionEnd = end;
		
  	this->OpenFileList->Files[PrevFileIndex]->UpdateBuffer( this->Editor->buffer() );	
	}	
 	
	this->Editor->ChangeFile( this->OpenFileList->CurrentFile() ); // load file buffer into editor
	this->OpenFileList->Refresh();
	
	this->CurFnList->Populate(CodeMan.GlobalFunctions,
		CodeMan.Classes,
		this->OpenFileList->CurrentFile()->FilePath );
	
	this->Editor->take_focus();	
	this->Editor->show_insert_position();
}
/*=============================================================================
	GoToLine
=============================================================================*/
int MainWindow::GoToLine(int LineNo)
{
	const char *Line;
	int NumLines = this->Editor->buffer()->count_lines(0, this->Editor->buffer()->length()-1 );
	int pos;
	
	if(LineNo == 0) // not specified, get from input box
	{	
		Line = fl_input("Go to line");
		if( ! Line) return 0;
		sscanf(Line, "%d", &LineNo);
	}
	
	if(LineNo < 1) LineNo = 1;
	else if(LineNo > NumLines) LineNo = NumLines;
	
	pos = this->Editor->buffer()->skip_lines(0, LineNo-1);
	this->Editor->insert_position( pos );
	this->Editor->scroll(this->Editor->CurrentLine()+10, 0);
	this->Editor->scroll(this->Editor->CurrentLine()-10, 0);
	this->Editor->show_insert_position();
	this->Editor->take_focus();
}
/*=============================================================================
	FindAndReplace
=============================================================================*/
int MainWindow::FindAndReplace()
{
	if(this->Editor->buffer()->selection_text())
		this->FindString = this->Editor->buffer()->selection_text();
		
	const char *find_str = fl_input("Find:", this->FindString.c_str() );
	
 	if(find_str)
	{
		this->FindString = find_str;
		FindNext();
	}
}
/*=============================================================================
	FindNext
=============================================================================*/
int MainWindow::FindNext()
{
	int pos = this->Editor->insert_position();
  int found = this->Editor->buffer()->search_forward(pos, this->FindString.c_str(), &pos);
  if (found) 
  {
    // Found a match; select and update the position...
    this->Editor->buffer()->select(pos, pos + this->FindString.length() );
    this->Editor->insert_position( pos + this->FindString.length() );
    this->Editor->show_insert_position();
  }
  else fl_alert("No occurrences of \'%s\' found!", this->FindString.c_str() );
}
/*=============================================================================
	FindNext
=============================================================================*/
int MainWindow::Close()
{
	printf("Closing window\n");
	if(this->OpenFileList->CurrentFile())
		this->OpenFileList->CurrentFile()->UpdateBuffer( this->Editor->buffer() );
	
	this->OpenFileList->SaveList(DefProject);
	
	printf("Removin all files\n");	
	return this->OpenFileList->RemoveAll();
}
/*=============================================================================
	DoIdleJobs
=============================================================================*/
int MainWindow::DoIdleJobs()
{
	this->CheckLockFile();
	this->OpenFileList->Refresh(); // checks for file modifications
	
  Fl::remove_timeout(timout_cb, (void*)this);
	Fl::add_timeout(LOCK_CHECK_TIMEOUT, timout_cb, (void*)this);
}
/*=============================================================================
	CheckLockFile
=============================================================================*/
int MainWindow::CheckLockFile()
{
	this->OpenProject(LockFile.c_str());
	
	// truncate file and touch
	std::ofstream lock_file;
	lock_file.open(LockFile.c_str(), ofstream::out | ofstream::trunc);
	lock_file.close();
}
/*=============================================================================
	timout_cb
=============================================================================*/
void timout_cb(void* data)
{
	if(!data) return;
	MainWindow* Window = (MainWindow*)(data);
	
	Window->CheckLockFile();
	
	Fl::repeat_timeout(LOCK_CHECK_TIMEOUT, timout_cb, data);
}
/*=============================================================================
	idle_cb
=============================================================================*/
void idle_cb(void* data)
{
	if(!data) return;
	MainWindow* Window = (MainWindow*)(data);
	
  Window->DoIdleJobs();
}

/*=============================================================================
	
=============================================================================*/


