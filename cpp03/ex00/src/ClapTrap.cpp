#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
	:
		_name("Default"),
		_hp(10),
		_mana(10),
		_dps(0)
{
	std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name)
	: 
		_name(name),
		_hp(10),
		_mana(10),
		_dps(0)
{
	std::cout << "Constructor with name as an arg " << _name << " called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
	:
		_name(other._name),
		_hp(other._hp),
		_mana(other._mana),
		_dps(other._dps)
{
	std::cout << "Copy constructor of " << _name <<  " called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
	if (this != &other){
		_name = other._name;
		_hp = other._hp;
		_mana = other._mana;
		_dps = other._dps;
		std::cout << "Assignment constructor called." << _name;
		std::cout << "copy of " << other._name << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap(){
	std::cout << "Default distructor called on " << _name << std::endl; 
}

void ClapTrap::attack(const std::string &target){
	if(_hp == 0)
		std::cout << _name << " is dead and cannot attack anymore" << std::endl;
	else if(_mana == 0)
		std::cout << _name << " has no energy points and cannot attack anymore" << std::endl;
	else{
		_mana--;
		std::cout << _name << " brutally attacks " << target;
		std::cout << " and dealing " << _dps << " damage." << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	_hp = _hp >= amount ? _hp - amount : 0;
	std::cout << _name << " takes " << amount << " damage";
	std::cout << " Current hp is: " << _hp  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if(_hp == 0)
		std::cout << _name << " is dead and cannot be repaired." << std::endl;
	else if(_mana == 0)
		std::cout << _name << " has no energy points to be repaired." << std::endl;
	else{
		_mana--;
		_hp += amount;
		std::cout << _name << " got a healing salve and regenerates " << amount << "hp.";
		std::cout << " Current hp is: " << _hp  << std::endl;
	}
}