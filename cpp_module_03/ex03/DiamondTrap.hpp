#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap(void) : ClapTrap(), _name()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const string &name) : 
ClapTrap(name + "_clap_name"), _name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->HP = 100;
	this->E = 50;
	this->D = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) 
: ClapTrap()
{
	std::cout << "DiamondTrap Copy constructor called" << std::endl;
	*this = other;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
	std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
	const_cast<string &>(this->_name) = other._name;
	const_cast<string &>(this->name) = other.name;
	this->HP = other.HP;
	this->E = other.E;
	this->D = other.D;
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	if (this->HP > 0)
		std::cout << "DiamondTrap name is " << this->_name << " and ClapTrap name is " << this->name << "!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	 std::cout << "DiamondTrap destructor called" << std::endl; 
	}
