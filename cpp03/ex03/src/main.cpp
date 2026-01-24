#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"


int main()
{
    std::cout << std::string(50, '+') << std::endl;
    std::cout << "BASIC CONSTRUCTOR TESTS" << std::endl;
    std::cout << std::string(50, '+') << std::endl;

    DiamondTrap Neptun("Neptun");

    std::cout << std::string(50, '+') << std::endl;
    std::cout << "ATTACK / SPECIAL ABILITIES TESTS" << std::endl;

    Neptun.attack("enemy 1");
    Neptun.guardGate();
    Neptun.highFivesGuys();
    Neptun.whoAmI();

    std::cout << std::string(50, '+') << std::endl;
    std::cout << "DAMAGE / REPAIR TESTS" << std::endl;

    Neptun.takeDamage(20);
    Neptun.beRepaired(15);

    std::cout << std::string(50, '+') << std::endl;
    std::cout << "END OF TESTS - DESTRUCTORS WILL NOW RUN" << std::endl;
    std::cout << std::string(50, '+') << std::endl;

    return 0;
}
