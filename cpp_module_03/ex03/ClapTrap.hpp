#pragma once

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &rhs);
	virtual ~ClapTrap();

public:
	ClapTrap &operator=(const ClapTrap &rhs);
	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string _name;
	long long _hit_points;
	long long _energy_points;
	long long _attack_damage;
};