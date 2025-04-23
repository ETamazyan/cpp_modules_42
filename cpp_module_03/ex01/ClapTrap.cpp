#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->m_name = "";
	this->m_hit_points = 10;
	this->m_energy_points = 10;
	this->m_attack_damage = 0;

	std::cout << "СlapTrap default constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "СlapTrap destructor has been called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
	this->m_name = name;
	this->m_hit_points = 10;
	this->m_energy_points = 10;
	this->m_attack_damage = 0;

	std::cout << "СlapTrap parameterized constructor has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	this->m_name = rhs.m_name;
	this->m_hit_points = rhs.m_hit_points;
	this->m_energy_points = rhs.m_energy_points;
	this->m_attack_damage = rhs.m_attack_damage;

	std::cout << "СlapTrap copy constructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs)
{
	this->m_name = rhs.m_name;
	this->m_hit_points = rhs.m_hit_points;
	this->m_energy_points = rhs.m_energy_points;
	this->m_attack_damage = rhs.m_attack_damage;

	return *this;
}

void ClapTrap::attack(const std::string &target)
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
	std::cout << "ClapTrap " << this->m_name << " attacks " << target << ", causing " << this->m_attack_damage << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->m_hit_points == 0)
	{
		std::cout << "0 hit points, repairing failed" << std::endl;
		return;
	}
	if (this->m_energy_points == 0)
	{
		std::cout << "0 energy points, repairing failed" << std::endl;
		return;
	}
	this->m_energy_points -= amount;
	std::cout << this->m_name << " repaired" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->m_hit_points == 0)
	{
		std::cout << "0 hit points, taking damage failed" << std::endl;
		return;
	}

	if (amount >= this->m_hit_points)
	{
		this->m_hit_points = 0;
	}
	else
	{
		this->m_hit_points -= amount;
	}

	std::cout << this->m_name << " taked " << amount << " damage." << std::endl;
}
