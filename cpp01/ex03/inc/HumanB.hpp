#pragma once 

#include "Weapon.hpp"

class HumanB
{
private:
	std::string _name;
	Weapon* _weapon; // stored as pointer because HumanB can be created without weapon 
public:
	HumanB(const std::string& name);
	void attack();
	void setWeapon(Weapon& weapon);
	~HumanB();

};
