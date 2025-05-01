#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "[WrongAnimal] Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string &type)
{
	this->type = type;
	std::cout << "[WrongAnimal] Parameterized constructor called with type: " << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	std::cout << "[WrongAnimal] Copy constructor called" << std::endl;
	*this = rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	std::cout << "[WrongAnimal] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[WrongAnimal] " << this->getType() << " makes a wrong generic sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
	std::cout << "[WrongAnimal] getType called" << std::endl;
	return this->type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[WrongAnimal] Destructor called for type: " << this->type << std::endl;
}
