#include "FragTrap.hpp"

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->m_name = "";
	this->m_hit_points = 100;
	this->m_energy_points = 100;
	this->m_attack_damage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->m_hit_points = 100;
	this->m_energy_points = 100;
	this->m_attack_damage = 30;

	std::cout << "FragTrap constructor with name called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	this->m_name = rhs.m_name;
	this->m_hit_points = rhs.m_hit_points;
	this->m_energy_points = rhs.m_energy_points;
	this->m_attack_damage = rhs.m_attack_damage;

	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requests a high five! ✋😄" << std::endl;
}
