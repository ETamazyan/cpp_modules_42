#pragma once

#include <iostream>

class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &rhs);
	~ClapTrap();

public:
	ClapTrap &operator=(const ClapTrap &rhs);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

protected:
	std::string m_name;
	long long m_hit_points;
	long long m_energy_points;
	long long m_attack_damage;
};