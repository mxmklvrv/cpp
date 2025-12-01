#include "Harl.hpp"
#include <iostream>
Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug(void){
	std::cout << DEBUG_MSG << std::endl;
}

void Harl::info(void){
	std::cout << INFO_MSG << std::endl;
}

void Harl::warning(void){
	std::cout << WARNING_MSG << std::endl;
}

void Harl::error(void){
	std::cout << ERROR_MSG << std::endl;
}

