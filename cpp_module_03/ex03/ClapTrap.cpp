#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->_name = "";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;

	std::cout << "СlapTrap default constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "СlapTrap destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;

	std::cout << "СlapTrap parameterized constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	std::cout << "СlapTrap copy constructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

void ClapTrap::attack(const std::string &target)
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
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << "0 hit points, repairing failed" << std::endl;
		return;
	}
	if (this->_energy_points == 0)
	{
		std::cout << "0 energy points, repairing failed" << std::endl;
		return;
	}
	this->_energy_points -= amount;
	std::cout << this->_name << " repaired" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit_points == 0)
	{
		std::cout << "0 hit points, taking damage failed" << std::endl;
		return;
	}

	if (amount >= this->_hit_points)
	{
		this->_hit_points = 0;
	}
	else
	{
		this->_hit_points -= amount;
	}

	std::cout << this->_name << " taked " << amount << " damage." << std::endl;
}
