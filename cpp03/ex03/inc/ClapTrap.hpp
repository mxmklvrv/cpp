#pragma once

#include <string>
#include <iostream>

class ClapTrap
{
protected:
	std::string _name;
	unsigned int _hp;
	unsigned int _mana;
	unsigned int _dps;
public:
	ClapTrap(void);
	ClapTrap(const std::string& name);
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
	virtual ~ClapTrap();

	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


