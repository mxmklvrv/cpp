#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
    // std::cout << std::string(50, '+') << std::endl;
    // std::cout << "BASIC CONSTRUCTOR TESTS" << std::endl;
    // std::cout << std::string(50, '+') << std::endl;

 
    // // Parameterized constructor
    // DiamondTrap dt2("Neptun");

    // // WhoAmI test
    // dt2.whoAmI();

    // std::cout << std::string(50, '+') << std::endl;
    // std::cout << "ATTACK / SPECIAL ABILITIES TESTS" << std::endl;

    // // Attack
    // dt2.attack("enemy1");

    // // ScavTrap guardGate()
    // dt2.guardGate();

    // // FragTrap highFivesGuys()
    // dt2.highFivesGuys();

    // std::cout << std::string(50, '+') << std::endl;
    // std::cout << "DAMAGE / REPAIR TESTS" << std::endl;

    // dt2.takeDamage(20);
    // dt2.beRepaired(15);

    // std::cout << std::string(50, '+') << std::endl;
    // std::cout << "END OF TESTS - DESTRUCTORS WILL NOW RUN" << std::endl;
    // std::cout << std::string(50, '+') << std::endl;

    ClapTrap* a = new ScavTrap();
    ClapTrap* b = new FragTrap();
    ClapTrap* c = new DiamondTrap();

    a->attack("X");
    b->attack("Y");
    c->attack("Z");

    return 0;
}

/**
 * If a function is called through a base-class pointer/reference and you want the derived version → it must be virtual.
 */