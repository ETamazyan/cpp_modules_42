#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), _name("Default")
{
	_hit_points = 100;   // from FragTrap
	_energy_points = 50; // from ScavTrap
	_attack_damage = 30; // from FragTrap
	std::cout << "DiamondTrap default constructor called\n";
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap(), _name(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 30;
	std::cout << "DiamondTrap name constructor called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	*this = other;
	std::cout << "DiamondTrap copy constructor called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		_name = other._name;
	}
	std::cout << "DiamondTrap copy assignment operator called\n";
	return *this;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << _name << ", and my ClapTrap name is " << ClapTrap::_name << "\n";
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called\n";
}