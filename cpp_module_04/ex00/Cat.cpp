#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "[Cat] Default constructor called" << std::endl;
}

Cat::Cat(const Cat &rhs) : Animal(rhs)
{
	std::cout << "[Cat] Copy constructor called" << std::endl;
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	std::cout << "[Cat] Copy assignment operator called" << std::endl;
	if (this != &rhs)
		this->type = rhs.getType();
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "[Cat] meow~" << std::endl;
}

Cat::~Cat()
{
	std::cout << "[Cat] Destructor called" << std::endl;
}
