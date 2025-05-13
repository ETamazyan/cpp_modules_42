#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Unknown_clap__name"), ScavTrap(), FragTrap(100, 30), _name("Unknown")
{
 std::cout<<"DiamondTrap "<< this->_name <<" was created! (default ctor)\n";
}

DiamondTrap::~DiamondTrap()
{
 std::cout<<"DiamondTrap "<< this->_name <<" was destructed!\n";
}

DiamondTrap::DiamondTrap(std::string _name) : ClapTrap(_name + "_clap__name"), ScavTrap(), FragTrap(100, 30)
{
 this->_name = _name;
 std::cout<<"DiamondTrap "<< _name <<" was created! (ctor w/params)\n";
}

DiamondTrap::DiamondTrap(DiamondTrap& diamondtrap)
{
 this->_name = diamondtrap._name;
 this->_hit_points = diamondtrap._hit_points;
 this->_energy_points = diamondtrap._energy_points;
 this->_attack_damage = diamondtrap._attack_damage;
 std::cout<<"DiamondTrap "<< this->_name <<" was created! (copy ctor)\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &diamondtrap)
{
 if (this == &diamondtrap)
  return *this;
 std::cout<<"DiamondTrap copy assignment operator called!\n";
 this->_name = diamondtrap._name;
 this->_hit_points = diamondtrap._hit_points;
 this->_energy_points = diamondtrap._energy_points;
 this->_attack_damage = diamondtrap._attack_damage;
 return *this;
}

void DiamondTrap::whoAmI()
{
 std::cout<<"DiamondTrap's _name is: "<<this->_name<<std::endl;
 std::cout<<"ClapTrap's _name is: "<< ClapTrap::_name<<std::endl;
}