#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
    std::cout << std::string(50, '+') << std::endl;
    std::cout << "BASIC CONSTRUCTOR TESTS" << std::endl;
    std::cout << std::string(50, '+') << std::endl;

    // Default constructor
    DiamondTrap dt1;

    // Parameterized constructor
    DiamondTrap dt2("Neptun");

    // Copy constructor
    DiamondTrap dt3(dt1);

    // Assignment operator
    DiamondTrap dt4;
    dt4 = dt2;

    // WhoAmI test
    DiamondTrap dt5("Mars");
    dt5.whoAmI();

    std::cout << std::string(50, '+') << std::endl;
    std::cout << "ATTACK / SPECIAL ABILITIES TESTS" << std::endl;

    // Attack
    dt2.attack("enemy1");

    // ScavTrap guardGate()
    dt2.guardGate();

    // FragTrap highFivesGuys()
    dt2.highFivesGuys();

    std::cout << std::string(50, '+') << std::endl;
    std::cout << "DAMAGE / REPAIR TESTS" << std::endl;

    dt2.takeDamage(20);
    dt2.beRepaired(15);

    std::cout << std::string(50, '+') << std::endl;
    std::cout << "END OF TESTS - DESTRUCTORS WILL NOW RUN" << std::endl;
    std::cout << std::string(50, '+') << std::endl;

    return 0;
}