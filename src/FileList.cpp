#include "MainWindow.h"

/*=============================================================================
	EditorFile
=============================================================================*/
EditorFile::EditorFile(string NewFilePath)
{
	this->FilePath = NewFilePath;
	this->TextBuffer = new Fl_Text_Buffer();
	this->saved = 1;
	this->last_mtime = 0;	
	
	if( ! NewFilePath.empty() )
	{
		this->TextBuffer->loadfile( NewFilePath.c_str() );
		if( TextBuffer->length() == 0) this->saved = 0; // nothing loaded
		
		#if !defined(WIN32)
		// remove '\r' from buffer on Linux
		int i;
		for(i=0; i<TextBuffer->length(); i++)
			if(TextBuffer->character(i) == '\r')
				TextBuffer->replace(i, i+1, " ");
		#endif
		
		this->last_mtime = this->MTime();	
	}
	
	this->insert_position = 0;
	this->TopLine = 0;
	this->SelectionStart = 0;
	this->SelectionEnd = 0;
}
/*=============================================================================
	~EditorFile
=============================================================================*/
EditorFile::~EditorFile()
{
	if(this->TextBuffer) delete (this->TextBuffer);
}
/*=============================================================================
	Load
=============================================================================*/
int EditorFile::Load(string NewFilePath)
{
	if( ! NewFilePath.empty() )
		this->FilePath = NewFilePath;
	
	if( ! this->FilePath.empty() )
	{
		this->TextBuffer->loadfile( this->FilePath.c_str() );
		if( TextBuffer->length() == 0) this->saved = 0; // nothing loaded
		this->last_mtime = this->MTime();	
	}
	else 
 	{
  	return 0;
 	}
	
	return 1;
}
/*=============================================================================
	MTime
=============================================================================*/
long EditorFile::MTime()
{
 	return Timestamp( this->FilePath );
}
/*=============================================================================
	CheckChange
=============================================================================*/
int EditorFile::CheckChange()
{
	if( this->last_mtime == 0)
		this->last_mtime = this->MTime();
 	else if( this->MTime() != 0 && this->MTime() != this->last_mtime )
		return 0;
	/*else if( ! IsReadable(this->FilePath) )
		return 0;*/
	
	return 1;
}
/*=============================================================================
	UpdateBuffer
=============================================================================*/
int EditorFile::UpdateBuffer(Fl_Text_Buffer* UpdatedBuffer)
{
	if( UpdatedBuffer )
	{
		this->TextBuffer->text( UpdatedBuffer->text() );
	}
}
/*=============================================================================
	FileName
=============================================================================*/
string EditorFile::FileName()
{
	if( ! this->FilePath.empty() )
		return fl_filename_name( this->FilePath.c_str() );
	else
		return "Untitled";
}
/*=============================================================================
	Save
=============================================================================*/
int EditorFile::Save(int save_as)
{
	char *File;
	
	if( this->FilePath.empty() || save_as ) // new file
	{
		File = fl_file_chooser("Save As", "", "");
		if(File) this->FilePath = File;
	}

	if( this->CheckChange() == 0 )
	{
		int choice = fl_choice("File '%s' has changed on disk!", "Cancel", "Reload", "Overwrite", this->FileName().c_str() );
  	 
  	if( choice == 0 ) // cancel
   		return 0;
   	
    if( choice == 1 ) // reload
   	{
   		this->Load();	
   		return 2;
 		}
	}

	if( ! this->FilePath.empty() )
	{
		this->TextBuffer->savefile( this->FilePath.c_str() );
		this->saved = 1;
		this->last_mtime = this->MTime();
	}
	
	return this->saved;
}
/*###########################################################################*/
/*###########################################################################*/
/*=============================================================================
	FileList
=============================================================================*/
FileList::FileList(int x, int y, int w, int h)
:Fl_Hold_Browser(x, y, w, h, 0)
{
	//this->Window = NULL; //(MainWindow*)(this->parent())
}
/*=============================================================================
	~FileList
=============================================================================*/
FileList::~FileList()
{
	int i;
	for(i = 0; i < Files.size(); i++)
		delete Files[i];
	Files.clear();
}
/*=============================================================================
	handle
=============================================================================*/
int FileList::handle(int event)
{
	string SelItem;
	int CurValue;
	int NewValue;
	int ret;
	static MainWindow* win;
			
	CurValue = Index();
	ret = Fl_Hold_Browser::handle(event); // let the event do its job
	NewValue = Index();
	
	if(win == NULL) 
		win = (MainWindow*)this->parent();
	
	if(NewValue != CurValue)
		win->FileSwitched( CurValue );
		
	if(event == FL_MOVE) 
	{	
		if(Fl::event_x() < this->w() && Fl::event_y() < this->h())
		{
		 if( this->CurrentFile() )
		 {
			win->Params->hide();
			//win->redraw();
			
			int item = (Fl::event_y()-this->y()-3)/(this->item_height());
			
			if( item>=0 && item<this->Files.size() && this->Files[item] )
			{
				win->Params->value( this->Files[item]->FilePath );
				win->Params->resize( this->w(), this->y() + item*(this->item_height()), win->w(), this->item_height() + 4  );
				win->Params->Show();
			}
		 }
		}

	}
	else if(event == FL_LEAVE)
	{
		win->Params->hide();
	}
	
	switch(event) {
		case FL_DND_ENTER: return 1; break;
		case FL_DND_DRAG: return 1; break;
		case FL_DND_RELEASE: return 1; break;
		case FL_PASTE: 
  		string File = Fl::event_text(); 
  		printf("File: %s\n", File.c_str() );
  		if( File.substr(0, 5) == "file:" ) {
 				File = File.substr(6, File.length()-7);
  		}
    	win->OpenFile(File);	
    	return 1;
    break;
	}
	
	return ret;
}
/*=============================================================================
	item_height
=============================================================================*/
int FileList::item_height(void* p)
{
	return 15;
}
/*=============================================================================
	Add
=============================================================================*/
int FileList::Add( string FilePath )
{
	int i;
	EditorFile* NewFile;
	char AbsolFilePath[2048];
	int PrevIndex = Index();
		
	if( ! FilePath.empty() )
	{
		fl_filename_absolute(AbsolFilePath, FilePath.c_str() );
		FilePath = AbsolFilePath;
		FilePath = NormPath(FilePath);
		
		// check if file already open	
		for(i = 0; i < Files.size(); i++)
			if(Files[i]->FilePath == FilePath)
			{
				this->value( i+1 );
				if(PrevIndex != Index())
 					((MainWindow*)this->parent())->FileSwitched(PrevIndex);
				return 0;
			}
 	}
 
 // create Text buffer for new file
 NewFile = new EditorFile(FilePath); 
 Files.push_back(NewFile); 
 
 this->add( NewFile->FileName().c_str() );

 this->value( this->size() );
 
 if(PrevIndex != Index())
 	((MainWindow*)this->parent())->FileSwitched(PrevIndex);
   
 this->Refresh();
 
 return 1;
}
/*=============================================================================
	CurrentFile
=============================================================================*/
EditorFile* FileList::CurrentFile()
{
	if(Index() >= 0)
		return Files[Index()];
	else
		return NULL;
}
/*=============================================================================
	Refresh
=============================================================================*/
int FileList::Refresh()
{
	int i;
	string label;
	
	for(i = 0; i < Files.size(); i++ )
	{
		label = Files[i]->FileName();

  	if(Files[i]->saved == 0)
			label = "* " + label;
		
    if( Files[i]->CheckChange() == 0) // changed on disk
			label = "@C1? " + label;
		
		if( label != this->text(i+1) )	
			this->text( i+1, label.c_str() );	
	}
	
}
/*=============================================================================
	Remove
=============================================================================*/
int FileList::Remove( int ItemIndex )
{
	if( ItemIndex < 0 ) ItemIndex = Index();
		
	if( ItemIndex >= this->Files.size()  )
		return 0;
  	
	if( ! this->Files[ItemIndex]->saved )
	{
		int choice = fl_choice("File '%s' is not saved.", "Cancel", "Save", "Don't save", Files[ItemIndex]->FileName().c_str() );
  	
		if( choice == 1 ) // yes
			choice = Files[ItemIndex]->Save();
		
  	if( choice == 0 ) // cancel
   		return 0;
	}
	
	if(ItemIndex >= 0)
	{
		//delete Files[ItemIndex];
		vector<EditorFile*>::iterator i;
		i = Files.begin();
 		Files.erase( i+(ItemIndex) );
 	  this->remove( this->value() );
		 		
 		if(ItemIndex > 0 && this->size() > 0)
 			this->value(ItemIndex);
		else
		{
			if(this->size() > 0)
				this->value(0);
		}
	}
	
	return 1;
}

/*=============================================================================
	Remove
=============================================================================*/
int FileList::RemoveAll()
{
	int i;
	
	for(i = 0; i < Files.size(); i++ )
	{
		if( ! Remove(i) )
			return 0; // canceled
	}
	
	return 1;
}
/*=============================================================================
	SaveList
=============================================================================*/
int FileList::SaveList(string FileName)
{
	int i;
	string Line;
	char *File;
	
	if( FileName.empty() ) 
	{
		File = fl_file_chooser("Save File List", "", "");
		if(File) FileName = File;
	}
	
	if(FileName.empty()) return 0;
	
	FILE *fp = fopen(FileName.c_str(), "w+");
	
	if(!fp) return 0;
	
	for(i = 0; i < Files.size(); i++ )
	{
		Line = Files[i]->FilePath + "\n";
		fputs(Line.c_str(), fp );
	}
	
	fclose(fp);
	
	return 1;
}
/*=============================================================================
	Index
=============================================================================*/
int FileList::Index()
{
	if(this->value() == 0) // none selected
		if(this->size() > 0) // have some items
			this->value(1);			// select first
	
	return (this->value()-1);
}	
/*=============================================================================
	
=============================================================================*/
