#include "Replace.hpp"
#include <iostream>
#include <fstream>

int main(int ac, char **av){
	if (ac != 4){
		std::cerr << ERR_INP << std::endl;
		return (1);
	}

	std::string file = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];

	std::ifstream fin(file);
	if(!fin.is_open()){
		std::cerr << ERR_FREAD << std::endl;
		return (1);
	}
	if(s1.empty()){
		std::cerr << "s1 cannot be empty." << std::endl;
		return (1);
	}
	std::string	repFile = file + ".replace";

	std::ofstream fout(repFile);
	if(!fout.is_open()){
		std::cerr << ERR_FWRT << std::endl;
		return (1);
	}

	Replace sed(file, s1, s2);
	std::string line;
	
	while(std::getline(fin, line)){
		fout << sed.replaceString(line) << '\n';
	}
	return (0);
	
}