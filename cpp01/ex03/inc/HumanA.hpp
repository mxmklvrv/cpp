#pragma once 

#include "Weapon.hpp"

class HumanA
{
private:
	std::string _name;
	Weapon& _weapon; // passed by reference because takes the Weapon in its constructor.
public:
	HumanA(const std::string& name, Weapon& weapon);
	void attack();
	~HumanA();

};

