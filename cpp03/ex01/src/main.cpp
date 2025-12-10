#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void){
	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "Basic constructor tests" << std::endl;
	std::cout << std::endl;
	ScavTrap Earth;
	ScavTrap Neptun("Neptun");
	ScavTrap Jupiter(Earth);
	ScavTrap Venus;
	Venus = Neptun;
	ScavTrap Mars("Mars");

	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "Atack test" << std::endl;
	std::cout << std::endl;
	for(int j = 0; j < 51; j++)
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
	std::cout << "Gate keeper test" << std::endl;
	std::cout << std::endl;
	Mars.guardGate();
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << std::string(50,'+') << std::endl;
	std::cout << "Damage test" << std::endl;
	std::cout << std::endl;

	Mars.takeDamage(50);
	Mars.takeDamage(100);
	Mars.takeDamage(25);

	std::cout << std::string(50,'+') << std::endl;
	std::cout << "END" << std::endl;
	std::cout << std::endl;
}