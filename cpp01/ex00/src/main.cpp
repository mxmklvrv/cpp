#include "Zombie.hpp"

int main(void){
	std::cout << "Regular case, no allocation:" << std::endl;
	Zombie zomby("Evgeny");
	zomby.announce();
	std::cout << std::endl;

	std::cout << "Allocation case" << std::endl;

	Zombie *zhaba = newZombie("Zhaba");
	if(!zhaba)
		return 1;
	zhaba->announce();

	std::cout << std::endl;

	std::cout << "RandomChump case" << std::endl;
	randomChump("Champion");
	delete zhaba;
	return (0);
}