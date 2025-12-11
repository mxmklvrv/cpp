#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "Basic constructor tests" << std::endl;
	std::cout << std::endl;
	FragTrap Earth;
	FragTrap Neptun("Neptun");
	FragTrap Jupiter(Earth);
	FragTrap Venus;
	Venus = Neptun;
	FragTrap Mars("Mars");

	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "Atack test" << std::endl;
	std::cout << std::endl;
	for(int j = 0; j < 101; j++)
		Neptun.attack("Venus");

	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "Repair test" << std::endl;
	std::cout << std::endl;
	Neptun.beRepaired(10);
	Mars.beRepaired(10);
	Mars.beRepaired(25);

	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "High-five test" << std::endl;
	std::cout << std::endl;
	Mars.highFivesGuys();
	Neptun.highFivesGuys();
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "Damage test" << std::endl;
	std::cout << std::endl;

	Mars.takeDamage(50);
	Mars.takeDamage(100);
	Mars.takeDamage(25);

	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "After death test" << std::endl;

	Mars.beRepaired(20);
	Mars.highFivesGuys();
	Mars.attack("Maxim");


	std::cout << std::string(50,'+') << std::endl;
	std::cout << "END" << std::endl;
	std::cout << std::endl;
}