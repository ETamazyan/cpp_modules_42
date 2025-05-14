#pragma once

#include <iostream>

// ClapTrap* bot = new ScavTrap("Bot");
// delete bot;  // UNDEFINED BEHAVIOR if ClapTrap's destructor is not virtual
// Without a virtual destructor in ClapTrap, the destructor of ScavTrap won't be called when deleting via a ClapTrap* pointer. This causes resource leaks or incomplete cleanup — especially if ScavTrap allocates dynamic memory or manages other resources.
class ClapTrap
{
public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &rhs);
	virtual ~ClapTrap();

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