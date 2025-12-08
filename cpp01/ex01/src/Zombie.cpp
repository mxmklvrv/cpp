#include "Zombie.hpp"

Zombie::Zombie(void){}

Zombie::Zombie(std::string name){
	_name = name;
}

Zombie::~Zombie(void){
	std::cout << "Zombie " << _name << " was destroyed." << std::endl;
}

void Zombie::announce(void){
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string &name){
	_name = name;
}