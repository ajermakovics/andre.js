#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <iostream>

using namespace std;

#ifndef _Archive_H
#define _Archive_H

class Archive
{
public:
	int Open(string File, bool ForWriting = false);
	int Close();
	
	ofstream out;
	ifstream in;
private:
	
};

// string operators 
Archive& operator<<(Archive& arc, string& s);
Archive& operator>>(Archive& arc, string& s);
Archive& operator<<(Archive& arc, char* s);
Archive& operator>>(Archive& arc, char* s);
Archive& operator<<(Archive& arc, const char* s);


// pod data operators
template<typename T>
Archive& operator<<(Archive& arc, T& t)
{
	arc.out<<t<<"\n";
	return arc;
}

template<typename T>
Archive& operator>>(Archive& arc, T& t)
{
	arc.in>>t;
	return arc;
}

// const
template<typename T> 
Archive& operator<<(Archive& arc, const T& t)
{
	arc.out<<t<<"\n";
	return arc;   
}

// vector operators
template<typename T>
Archive& operator<<(Archive& arc, std::vector<T>& vect)
{
	long i, size = vect.size();
	arc<<size;
	
	for(i = 0; i < size; i++)
		arc<<vect[i];
		
	return arc;
}

template<typename T>
Archive& operator>>(Archive& arc, std::vector<T>& vect)
{
	long i, size;
	T t;
			
	arc>>size;
	vect.reserve(size);
	
	for(i=0; i<size; i++)
	{
		arc>>t;
		vect.push_back(t);
	}
	
	return arc;
}

// map operators
template<typename K,typename D>
Archive& operator<<(Archive& arc, std::map<K, D>& map)
{
	K k;
	D d;
	long size = map.size();
	
	arc<<size;
	
	typename std::map<K,D>::iterator i;
	for(i = map.begin(); i != map.end(); i++)
	{
		k = i->first;
		d = i->second;
		arc<<k<<d; // map[k]
	}
	
	return arc;
}

template<typename K, typename D>
Archive& operator>>(Archive& arc, std::map<K, D>& map)
{
	long i,size;
	
	arc>>size;
 		
	for(i = 0; i < size; i++)
	{
		K k;
		D d;
		arc>>k; // key
		arc>>map[k];
	}
			
	return arc;
}
#endif
