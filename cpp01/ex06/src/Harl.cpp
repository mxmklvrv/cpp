#include "Harl.hpp"
#include <iostream>

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(void){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::info(void){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning(void){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << WARNING_MSG << std::endl;
}

void Harl::error(void){
	std::cout << "[ ERROR ]" << std::endl;
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
	int i = 0;
	while(i < 4 && lvls[i] != level)
		i++;
	switch (i)
	{
	case 0:
		(this->*ptrs[0])();
	case 1:
		(this->*ptrs[1])();
	case 2:
		(this->*ptrs[2])();
	case 3:
		(this->*ptrs[3])();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}
