#pragma once

#include <iostream>

class ClapTrap
{
private:
	std::string m_name;
	long long m_hit_points;
	long long m_energy_points;
	long long m_attack_damage;

public:
	// ClapTrap();
	// ~ClapTrap();
	// ClapTrap(std::string name);
	// ClapTrap(ClapTrap &claptrap);
	// ClapTrap &operator=(const ClapTrap &claptrap);
	// void attack(const std::string &target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);
	//take care of below
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& rhs);
	~ClapTrap();

	ClapTrap&	operator=(const ClapTrap& rhs);

	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);

};