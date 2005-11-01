#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include <FL/Fl_Double_Window.H>
#include <FL/Fl_Tooltip.H>
#include "FL/Fl_Output.H"
#include <FL/filename.H>
#include <FL/Fl_File_Chooser.H>
#include <FL/Fl_Color_Chooser.H>
#include <FL/Fl_Pixmap.H>
#include <FL/Fl_Menu_Item.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/x.H>
#include <fstream>
#include "Timer.h"
#include "MiscFns.h"
#include "ParamBox.h"
#include "FnList.h"
#include "CodeManager.h"
#include "FileList.h"
#include "TextEditor.h"
#include "CodeSelect.h"
#include "MainMenu.h"

#define FUNCTIONS "../config/phpFuncs.inc"
#define VARIABLES "../config/variables.inc"

#define FUNCS_VARS_SRO "../config/funcs_vars.sro"

#define DEFAULT_PROJECT "/.editor.pfl"
#define LOCK_FILE "/.editor.lck"

#define COMPLETION_START_LEN 2
#define LOCK_CHECK_TIMEOUT 1.0

// Path Seperator
#if defined(WIN32)
	#define PS "\\"
#else
	#define PS "/"
#endif

class MainWindow: public Fl_Double_Window
{
	public:
		MainWindow(int w, int h, const char *title = 0); // contructor
		~MainWindow();			// destructor
		void ShowBrowser();
		void ShowClassBrowser(string ClassName);
		int ShowFuncBrowser(string FnNameStart);
		int ShowVarBrowser(string VarNameStart);
		int ShowArrayBrowser(string VarName = "");
		void ShowFuncParams(string FnName, int FnPos, int ParamNr = 1);
		void GoToDefinition( int FnAtPos);
		void InsertText(const char* Text = 0);
		void ChooseColor();
		int CreateReplaceDlg();
		void Show(int argc, char **argv);
		void SetIcon();
		int OpenIncludeFile( int Pos );
		int Shortcut(ulong shortcut);
		
		int Close();
		int OpenFile(char* NewFile = 0);
		int OpenFile(string NewFile);
		int OpenProject(const char* ProjectFile = 0);
		int SaveFile(int save_as = 0);
		int NewFile();
		int CloseFile();
		int GoToLine(int Line = 0);
		int FindAndReplace();
		int FindNext();
		int FindNext(string SearchString, char TokenType, int StartPos = -1);
		int FindPrev(string SearchString, char TokenType, int StartPos = -1);
		
		int CurFileChanged();
		int LineChanged();
		int FileSwitched(int FileIndex);
		int BrowserFnChanged(Function* Fn);
		int DoIdleJobs();
		int CheckLockFile();
		
		ParamBox* Params;
		TextEditor* Editor;
		CodeSelect* Browser;
		string LockFile;
		
  private:
  	CodeManager CodeMan;
  	FileList* OpenFileList;
		FnList* CurFnList;
 		Fl_Menu_Bar *menu;
 		
  	Fl_Window *ReplaceDlg;
		
	  Fl_Output *LineNo;
	  
    string FindString;
  	string Executable;
  	string DefProject;
		      	
  	int handle(int event);		// event handler
};

//----------------------------------------------------------------
void idle_cb(void* data);
void timout_cb(void* data);
//----------------------------------------------------------------
