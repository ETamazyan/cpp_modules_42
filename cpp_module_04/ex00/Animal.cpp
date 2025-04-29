#include "Animal.hpp"

Animal::Animal()
{
	this->type = "";
	std::cout << "[Animal] Default constructor called" << std::endl;
}

Animal::Animal(const std::string &type)
{
	this->type = type;
	std::cout << "[Animal] Parameterized constructor called with type: " << type << std::endl;
}

Animal::Animal(const Animal &rhs)
{
	std::cout << "[Animal] Copy constructor called" << std::endl;
	*this = rhs;
}

Animal &Animal::operator=(const Animal &rhs)
{
	std::cout << "[Animal] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Animal::makeSound() const
{
	std::cout << "[Animal] " << this->getType() << " makes a generic sound" << std::endl;
}

std::string Animal::getType() const
{
	std::cout << "[Animal] getType() called" << std::endl;
	return this->type;
}

Animal::~Animal()
{
	std::cout << "[Animal] Destructor called for type: " << this->type << std::endl;
}
