#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "[WrongCat] Default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal(rhs)
{
	std::cout << "[WrongCat] Copy constructor called" << std::endl;
	*this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	std::cout << "[WrongCat] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "[WrongCat] " << this->getType() << " makes a weird meow sound" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat] Destructor called for type: " << this->type << std::endl;
}
