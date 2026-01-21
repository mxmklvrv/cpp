#include "ClapTrap.hpp"

int main(void){
	std::cout << "Basic constructor tests" << std::endl;
	ClapTrap Mars;
	ClapTrap Venus("Max");
	ClapTrap Earth(Venus);
	Mars = Venus;
	ClapTrap Uranus("Bob");
	ClapTrap Saturn("Ignat");
	std::cout << std::endl;
	std::cout << "Subject tests" << std::endl;
	for(int i = 0; i < 11; i++)
		Venus.attack("Texas");
	std::cout << std::endl;
	Saturn.takeDamage(1);
	Saturn.takeDamage(5);
	Saturn.takeDamage(3);
	std::cout << std::endl;
	Saturn.beRepaired(3);
	Saturn.beRepaired(0);
	Saturn.beRepaired(6);
	Saturn.takeDamage(11);
	Saturn.attack("Max");
	std::cout << std::endl;
}