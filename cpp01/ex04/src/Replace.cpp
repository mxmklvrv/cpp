#include "Replace.hpp"

// constructor
Replace::Replace(const std::string& fileName, const std::string& s1, const std::string& s2)
	:_fileName(fileName), _s1(s1), _s2(s2) {}


Replace::~Replace(){}

std::string Replace::replaceString(std::string str) const{
	size_t idx = 0;
	size_t len1 = _s1.length();
	size_t len2 = _s2.length();
	
	while((idx = str.find(_s1, idx)) != std::string::npos){
		str.erase(idx, len1);
		str.insert(idx, _s2);
		idx += len2;
	}
	return (str);
}
