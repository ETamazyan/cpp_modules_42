#include "Cure.hpp"

Cure::Cure()
{
	this->type = "ice";
}

Cure::Cure(const Cure &other): AMateria(other)
{
	*this = other;
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
		this->type = other.type;
	return (*this);
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

const std::string &Cure::getType(void) const
{
	return this->type;
}

Cure *Cure::clone(void) const
{
	return new Cure();
}

Cure::~Cure() {}