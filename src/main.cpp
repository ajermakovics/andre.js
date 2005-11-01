#include <FL/Fl.H>
#include <FL/fl_ask.H>
#include "MainWindow.h"

using namespace std;

#if defined(WIN32)
	const char* Title = "PHP Editor - Win";
#else
	const char* Title = "PHP Editor - Linux";
#endif

//-----------------------------------------------------------------------------
int CheckRunning(int argc, char *argv[]);
//-----------------------------------------------------------------------------
int run()
{
	while (Fl::check())
	{
 								// do something, but don't forget to
 		Fl::wait(); // wait or sleep giving time to OS
 		//Fl::wait(0.1) would toggle every 100 ms
	}
	
	return 0;
}
//-----------------------------------------------------------------------------
int main(int argc, char *argv[])
{
	int ret;
	
	if( CheckRunning(argc, argv) ) 
	{
		printf("Already running (or crashed). Try after a while. Exitting.\n");
 		return 0;
	}
	
	printf("\n ----------------------------------------------------- \n");
	printf("    %s, fltk%d.%d.%d, lib %f", Title, FL_MAJOR_VERSION, FL_MINOR_VERSION, FL_PATCH_VERSION, Fl::version());
	printf("\n ----------------------------------------------------- \n\n");
	
	Fl::dnd_text_ops(1); // allow drag n drop
			
	MainWindow* Window = new MainWindow(700, 600, Title);
		
  Window->Show(argc, argv);
  ret = run(); // run the first time
	
	Window->show();		// when exited form run()
	
	while( ! Window->Close() ) // ask to save documents in Close()
	{	
		ret = run();
		Window->show();		
	}
	
	string LockFile = NormPath(FileDir(argv[0]) + LOCK_FILE);
	remove(LockFile.c_str());
	
	delete(Window);
		
	return ret;
}
//-----------------------------------------------------------------------------
int CheckRunning(int argc, char *argv[])
{
	string LockFile = NormPath(FileDir(argv[0]) + LOCK_FILE);
	
	if( time(NULL) - Timestamp(LockFile) < 10  )
	{
		int i;
		ofstream outf;
		outf.open(LockFile.c_str(), ofstream::out | ofstream::app );
		
		for(i = 1; i < argc; i++) 
			outf<<argv[i]<<"\n";
		
		outf.close();
		return 1;
	}
	
	return 0; // not running
}
//-----------------------------------------------------------------------------
