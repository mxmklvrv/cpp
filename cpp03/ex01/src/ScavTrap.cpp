#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(){
	_hp = 100;
	_mana = 50;
	_dps = 20;

	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name){
	_hp = 100;
	_mana = 50;
	_dps = 20;
	std::cout << "ScavTrav constructor with " << _name << " as an arg called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other){
	std::cout << "ScavTrap copy constructor called on " << _name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other){
	if(this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap assignment operator called. " << _name;
	std::cout << "copy of " << other._name << std::endl;
	return *this;

}
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap distructor called on " << _name << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if(_hp == 0)
		std::cout << "ScavTrap  " << _name << " is dead and cannot attack anymore" << std::endl;
	else if(_mana == 0)
		std::cout << "ScavTrap " << _name << " has no energy points and cannot attack anymore" << std::endl;
	else{
		_mana--;
		std::cout <<" ScavTrap "<<_name << " brutally attacks " << target;
		std::cout << " and dealing " << _dps << " damage." << std::endl;
	}
}
