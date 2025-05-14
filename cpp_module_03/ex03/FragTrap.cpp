#include "FragTrap.hpp"

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;

	std::cout << "FragTrap constructor with name called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs)
{
	this->_name = rhs._name;
	this->_hit_points = rhs._hit_points;
	this->_energy_points = rhs._energy_points;
	this->_attack_damage = rhs._attack_damage;

	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap requests a high five! ✋😄" << std::endl;
}
