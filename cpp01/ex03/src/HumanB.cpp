#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): _name(name){}

void HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}