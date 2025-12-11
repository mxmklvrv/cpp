#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap("default_clap_name"), ScavTrap("default_clap_name"), FragTrap("default_clap_name"){
	_name = "default_dimond";
	_hp = FragTrap::_hp;
	_mana = ScavTrap::_mana;
	_dps = FragTrap::_dps;
	std::cout << "DiamondTrap default constructor called name: " << _name << std::endl;
}
DiamondTrap::DiamondTrap(const std::string& name) 
	:	ClapTrap(name + "_clap_name"),
		ScavTrap(name),
		FragTrap(name)
{
	_name = name;
	_hp = FragTrap::_hp;
	_mana = ScavTrap::_mana;
	_dps = FragTrap::_dps;
	std::cout << "DiamondTrap constructor with " << _name << " as an arg called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) 
	:	ClapTrap(other),
		ScavTrap(),
		FragTrap(),
		_name(other._name)
{
	_hp = other._hp;
	_mana = other._mana;
	_dps = other._dps;
	std::cout << "DiamondTrap copy constructor called on " << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other){
	if (this != &other){
		ClapTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap assignment operator called. " << _name;
	std::cout << "copy of " << other._name << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap(){
	std::cout << "DiamondTrap destructor called on " << _name << std::endl;
}

void DiamondTrap::whoAmI(){
	std::cout << "DiamondTrap name is " << _name << ", and ClapTrap name is " << ClapTrap::_name << std::endl;
}
