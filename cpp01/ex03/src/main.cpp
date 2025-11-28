#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

void test1(){
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
}

void test2(){
	Weapon club = Weapon("crude spiked club");
	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.setType("some other type of club");
	jim.attack();
}

void test3(){
	Weapon	club = Weapon("crude spiked club");
	HumanB	jim("Jim");
	jim.attack();
}

int main (void)
{
	std::cout << std::string(20, '-') << "HumanA test" << std::string(20, '-') << std::endl;
	test1();
	std::cout << std::string(20, '-') << "HumanB test" << std::string(20, '-') << std::endl;
	test2();
	std::cout << std::string(20, '-') << "HumanB no weapon test" << std::string(10, '-') << std::endl;
	test3();
	return 0;
}