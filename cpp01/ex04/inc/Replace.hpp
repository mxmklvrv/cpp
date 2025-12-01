#pragma once 

#include <string>

# define ERR_INP "Wrong input, usage: ./sedIsForLosers [filename] [str1 - to be replaced] [str2 - replacer]" 
# define ERR_FREAD "Cannot open the file for reading"
# define ERR_FWRT "Cannot open file for writing"

class Replace
{
private:
	std::string _fileName;
	std::string _s1;
	std::string _s2;
public:
	Replace(const std::string& fileName, const std::string& s1, const std::string& s2);
	~Replace();

	std::string replaceString(std::string str) const;
};

