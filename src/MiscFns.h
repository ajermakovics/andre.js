#include <string>

#ifndef _MiscFns_H
#define _MiscFns_H

std::string FileDir(std::string FilePath);
std::string AbsolutePath(std::string FileName);
std::string CurDir();
std::string FileExt(std::string FilePath);
int ChDir(std::string NewDir);
int IsDir(std::string FilePath);
int IsReadable(std::string FilePath);
int CreateFile(std::string FilePath);
long Timestamp(std::string FilePath);
long Filesize(std::string FilePath);
std::string NormPath(std::string FilePath);
std::string bin2hex(int n);
std::string num2str(int n);


#endif
