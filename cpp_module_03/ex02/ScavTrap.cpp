#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->m_name = "";
	this->m_hit_points = 100;
	this->m_energy_points = 50;
	this->m_attack_damage = 20;

	std::cout << "ScavTrap default constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor has been called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->m_hit_points = 100;
	this->m_energy_points = 50;
	this->m_attack_damage = 20;

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
	this->m_name = rhs.m_name;
	this->m_hit_points = rhs.m_hit_points;
	this->m_energy_points = rhs.m_energy_points;
	this->m_attack_damage = rhs.m_attack_damage;

	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->m_hit_points == 0)
	{
		std::cout << "0 hit points, attack failed" << std::endl;
		return;
	}
	if (this->m_energy_points == 0)
	{
		std::cout << "0 energy points, attack failed" << std::endl;
		return;
	}
	this->m_energy_points--;
	std::cout << "ScavTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attack_damage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "Guard Gate mode enabled" << std::endl;
}
