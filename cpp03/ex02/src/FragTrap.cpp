#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(){
	_hp = 100;
	_mana = 100;
	_dps = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name){
	_hp = 100;
	_mana = 100;
	_dps = 30;
	std::cout << "FragTrap constructor with " << _name << " as an arg called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other){
	std::cout << "FragTrap copy constructor called on " << _name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other){
	if(this != &other)
		ClapTrap::operator=(other);
	std::cout << "FragTrap assignment operator called. " << _name;
	std::cout << "copy of " << other._name << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called on " << _name << std::endl;
}

void FragTrap::highFivesGuys(void){
	if(_hp == 0)
		std::cout << "FragTrap " << _name << " is dead and cannot request a high-five." << std::endl;
	else if(_mana == 0)
		std::cout << "FragTrap " << _name << " has no energy points and cannot request a high-five" <<  std::endl;
	else{
		_mana--;
		std::cout << "FragTrap " << _name << " requested a high-five." << std::endl;
	}
}