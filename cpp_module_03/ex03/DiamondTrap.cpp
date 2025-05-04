#pragma once

#include <ScavTrap.hpp>
#include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{

public:
	DiamondTrap();
	DiamondTrap(const string &name);
	DiamondTrap(const DiamondTrap &other);
	DiamondTrap &operator=(const DiamondTrap &other);
	void whoAmI(void);
	~DiamondTrap();

private:
	const string _name;
};
