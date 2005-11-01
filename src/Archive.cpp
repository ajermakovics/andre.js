#include "Archive.h"

//===========================================================
int Archive::Open(std::string File, bool ForWriting)
{
	if(ForWriting)
	{
		out.open( File.c_str() );
		return out.is_open();
	}
	else
	{
		in.open( File.c_str() );
		return in.is_open();
	}	
} 
//===========================================================
int Archive::Close()
{
	if( out.is_open() )
		out.close();
	
	if( in.is_open() )
		in.close();
	return 1;
} 
//===========================================================

// string operators (specialization)
Archive& operator<<(Archive& arc, string& s)
{
	long len = s.size();
	arc<<len;	
	arc.out.write(s.c_str(), len);
	arc.out<<"\n";
	return arc;
}

Archive& operator>>(Archive& arc, string& s)
{
	long len;
	char dummy;
	
	arc>>len;
	s.clear();
	s.resize(len);
	arc.in.read( &dummy, 1); // eat \n
	arc.in.read( (char*)s.data(), len);
	
	return arc;
}

Archive& operator<<(Archive& arc, char* s)
{
	long len = strlen(s);
	arc<<len;	
	arc.out.write(s, len);
	arc.out<<"\n";
	return arc;
}

Archive& operator>>(Archive& arc, char* s)
{
  long len;
	char dummy;
	
	arc>>len;
	if(!s) s = new char[len+1];
	if(s)
	{
		s[0] = 0;
		arc.in.read( &dummy, 1); // eat \n
		arc.in.read( s, len);
		s[len] = 0;
	}
	return arc;
}

Archive& operator<<(Archive& arc, const char* s)
{
	long len = strlen(s);
	arc<<len;	
	arc.out.write(s, len);
	arc.out<<"\n";
	return arc;
}

