#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	this->type = "";
	std::cout << "[AAnimal] Default constructor called" << std::endl;
}

AAnimal::AAnimal(const std::string &type)
{
	this->type = type;
	std::cout << "[AAnimal] Parameterized constructor called with type: " << type << std::endl;
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	std::cout << "[AAnimal] Copy constructor called" << std::endl;
	*this = rhs;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	std::cout << "[AAnimal] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void AAnimal::makeSound() const
{
	std::cout << "[AAnimal] " << this->getType() << " makes a generic sound" << std::endl;
}

std::string AAnimal::getType() const
{
	std::cout << "[AAnimal] getType() called" << std::endl;
	return this->type;
}

AAnimal::~AAnimal()
{
	std::cout << "[AAnimal] Destructor called for type: " << this->type << std::endl;
}
