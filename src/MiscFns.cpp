#include "MiscFns.h"
#include "FL/filename.H"
#include <unistd.h>
#include <sys/stat.h> 

//-----------------------------------------------------------
std::string FileDir(std::string FilePath)
{
	int pos = FilePath.find_last_of("/\\");
	return FilePath.substr(0, pos);
}
//-----------------------------------------------------------
std::string AbsolutePath(std::string FileName)
{
	std::string ret;
	char buf[FL_PATH_MAX];
	
 	fl_filename_absolute(buf, FL_PATH_MAX, FileName.c_str() ); 
 	ret = buf;
 	
 	return ret;	
}
//-----------------------------------------------------------
int ChDir(std::string NewDir)
{
	return chdir(NewDir.c_str());
}
//-----------------------------------------------------------
int IsDir(std::string FilePath)
{
	return fl_filename_isdir(FilePath.c_str());
}
//-----------------------------------------------------------
std::string CurDir()
{
	std::string ret;
	char buf[FL_PATH_MAX];
	
 	if( getcwd(&buf[0], FL_PATH_MAX) )
 		ret = buf;
 	
 	return ret;
}
//-----------------------------------------------------------
std::string FileExt(std::string FilePath)
{
	std::string Ext;
	const char *ext = fl_filename_ext(FilePath.c_str() );
	
	if(ext) Ext = ext;
	else Ext = "";
	
	return Ext;
}
//-----------------------------------------------------------
int IsReadable(std::string FilePath)
{
  FILE *f;
	if( f = fopen( FilePath.c_str(), "r") )
	{
		fclose(f);
		return 1;
	}
	 
	return 0;
}
//-----------------------------------------------------------
int CreateFile(std::string FilePath)
{
  FILE *f;
	if( f = fopen( FilePath.c_str(), "a+") )
	{
		fclose(f);
		return 1;
	}
	 
	return 0;
}
//-----------------------------------------------------------
long Timestamp(std::string FilePath)
{
 	int r;
 	struct stat st;
  	
  r = stat(FilePath.c_str(), &st); 
  
  if( r == 0 )
   	return st.st_mtime;
  else 
  	return 0;
  
 	//cout<<"  size:"<<st.st_size<<" time:"<<st.st_mtime<<"\n";
 	//cout<<"  atime:"<<st.st_atime<<" ctime:"<<st.st_ctime<<"\n";
}
//-----------------------------------------------------------
long Filesize(std::string FilePath)
{
 	int r;
 	struct stat st;
  	
  r = stat(FilePath.c_str(), &st); 
  
  if( r == 0 )
   	return st.st_size;
  else 
  	return 0;
}
//-----------------------------------------------------------
std::string NormPath(std::string FilePath)
{
	int pos;
	#if defined(WIN32)
		std::string FindStr = "/";
		std::string ReplStr = "\\";
	#else
		std::string FindStr = "\\";
		std::string ReplStr = "/";
	#endif
	
	while( (pos = FilePath.find(FindStr)) > -1 )
		FilePath.replace(pos, 1, ReplStr);
	
	return FilePath;
}
//-----------------------------------------------------------
std::string bin2hex(int n)
{
	std::string Ret;
	
  for (int i=2*sizeof(int) - 1; i>=0; i--) 
  	Ret = Ret + "0123456789ABCDEF"[((n >> i*4) & 0xF)];
 
	return Ret;       
}
//-----------------------------------------------------------
std::string num2str(int n)
{
	char buf[255];
	sprintf(&buf[0], "%d", n);
	std::string ret = buf;
	return ret;
}
//-----------------------------------------------------------
std::string double2str(double n)
{
	char buf[255];
	sprintf(&buf[0], "%f", n);
	std::string ret = buf;
	return ret;
}
//-----------------------------------------------------------
