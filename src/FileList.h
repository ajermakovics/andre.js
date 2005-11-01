#include <FL/Fl_Hold_Browser.H>
#include <FL/Fl_Text_Buffer.H>
#include <string>
#include <vector>

using namespace std;

#ifndef _FILE_LIST_H
#define _FILE_LIST_H
//-------------------------------------------------
class EditorFile
{
 public:
 	EditorFile(string NewFilePath);
	~EditorFile();
	int Save(int save_as = 0);
	int Load(string NewFilePath = "");
	int UpdateBuffer(Fl_Text_Buffer* UpdatedBuffer);
	string FileName();
	long MTime();
	int CheckChange();
	    	
 	string FilePath;
	Fl_Text_Buffer* TextBuffer;
	int insert_position;
	int TopLine;
	int SelectionStart;
	int SelectionEnd;
	
	bool saved;
		
 private:
 	long last_mtime;
};
//-------------------------------------------------
class FileList: public Fl_Hold_Browser
{
	public:
		FileList(int x, int y, int w, int h);
		~FileList();
		
		int Add( string FilePath );
		int Remove( int ItemIndex = -1 );
		int RemoveAll();
		int Refresh();
		EditorFile* CurrentFile();
		int Index();
		int SaveList(string FileName);
		int item_height(void* p = NULL);
		
		vector<EditorFile*> Files;
		
	private:
		int handle(int event);
};
//-------------------------------------------------
#endif
