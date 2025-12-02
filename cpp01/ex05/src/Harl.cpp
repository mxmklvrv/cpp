#include "Harl.hpp"
#include <iostream>

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(void){
	std::cout << " _________" << std::endl;
	std::cout << "|__DEBUG__|" << std::endl;
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::info(void){
	std::cout << " ________" << std::endl;
	std::cout << "|__INFO__|" << std::endl;
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning(void){
	std::cout << " ___________" << std::endl;
	std::cout << "|__WARNING__|" << std::endl;
	std::cout << WARNING_MSG << std::endl;
}

void Harl::error(void){
	std::cout << " _________" << std::endl;
	std::cout << "|__ERROR__|" << std::endl;
	std::cout << ERROR_MSG << std::endl;
}

void Harl::complain(std::string level){
	void (Harl::*ptrs[])(void) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	std::string lvls[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++){
		if(lvls[i] == level){
			(this->*ptrs[i])();
			return;
		}
	}
	std::cout << " _________________" << std::endl;
	std::cout << "|__NOT SUPPORTED__|" << std::endl;
	std::cout << "There was no example message provided in the subject." << std::endl;
}