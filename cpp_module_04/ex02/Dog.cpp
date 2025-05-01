#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
	std::cout << "[Dog] Default constructor called" << std::endl;
}

Dog::Dog(const Dog &rhs) : AAnimal(rhs)
{
	std::cout << "[Dog] Copy constructor called" << std::endl;
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	std::cout << "[Dog] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Dog::makeSound() const
{
	std::cout << "[Dog] woof~" << std::endl;
}

Dog::~Dog()
{
	std::cout << "[Dog] Destructor called" << std::endl;
}
