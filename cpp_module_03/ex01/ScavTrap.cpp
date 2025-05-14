#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "ScavTrap default constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;

	std::cout << "Parameterized ScavTrap constructor for name has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "ScavTrap copy constructor has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs)
{
	if (this == &rhs)
		return *this;
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->_hit_points == 0)
	{
		std::cout << "0 hit points, attack failed" << std::endl;
		return;
	}
	if (this->_energy_points == 0)
	{
		std::cout << "0 energy points, attack failed" << std::endl;
		return;
	}
	this->_energy_points--;
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}
