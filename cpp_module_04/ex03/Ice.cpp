#include "Ice.hpp"

Ice::Ice()
{
	this->type = "ice";
}

Ice::Ice(const Ice &other): AMateria(other)
{
	*this = other;
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

const std::string &Ice::getType(void) const
{
	return this->type;
}

Ice *Ice::clone(void) const
{
	return new Ice();
}

Ice::~Ice() {}