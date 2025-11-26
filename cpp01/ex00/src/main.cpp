#include "Zombie.hpp"

int main(void){

	std::cout << "Test situation is happening here" << std::endl;

	std::cout << "Regular case, no allocation:" << std::endl;
	Zombie g("Evgeny");
	g.announce();
	std::cout << std::endl;

	std::cout << "Allocation case" << std::endl;

	Zombie *zhaba = newZombie("Zhaba");
	if(!zhaba)
		return 1;
	zhaba->announce();

	std::cout << std::endl;

	std::cout << "RandomChump case" << std::endl;
	randomChump("champion");

	delete zhaba;
	return (0);

}