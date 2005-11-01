#include <FL/Fl_Text_Buffer.H>
#include <FL/Fl_Text_Editor.H>
#include <FL/Fl_Text_Display.H>
#include <FL/fl_ask.H>
#include <string>
#include <stack>

	// token types
	#define T_BLANK	'A'
	#define T_VARIABLE 'B'
	#define T_STRING 'C'
	#define T_NUMBER 'D'
	#define T_SYMBOL 'E'
	#define T_COMMENT 'F'
	#define T_ID 'G'
	#define T_KEYWORD 'H'
	#define T_HIGHLIGHT 'I'
	#define T_ERROR 'J'
	#define T_HTML_SYM 'K'
	#define T_HTML_ID 'L'
	#define T_HTML_STR 'M'
	#define T_HTML_TXT 'N'
	#define T_HTML_CMNT 'O'

using namespace std;
//---------------------------------------------------------
class CodeFn
{
public:
	string Name;
	int pos;
	int LeftParens;
	int RightParens;
	int ParamNr;
};
//---------------------------------------------------------
class TextEditor : public Fl_Text_Editor
{
	public:
		TextEditor(int x, int y, int w, int h);
		~TextEditor();
		void position_xy(int *x, int *y, int pos = -1);
		char* GetText(int start, int end);
		int TextLength();
		int TopLine();
		int ChangeFile(EditorFile* NewFile);
		int Colorize(int start, int end);
		int EditParse(int pos, int tok_len, char tok_type);
		int HighlightMatching(int pos = -1);
		
		int CurrentLine(int pos = -1); // number
		string LineText(int pos = -1);
		int LineStart(int pos = -1);
		int LineEnd(int pos = -1);
		int InsertEcho();
		
		string FileName;
		
		// some data about current parsing state
		string CurToken;
  	int CursorInParameters; // function parameters are being typed (probably)
		string LastFn;
		int LastFnPos;
		int FnParamNr;
		bool NewFile;
				 	
 		Fl_Text_Buffer *TextBuf;
		Fl_Text_Buffer *StyleBuf;
 		
		int handle(int event);
		
	private:	
		string PrevToken;
		int CurTokenType;
		char prev_tok_type;
		
		stack<CodeFn*> FnStack;
};
