#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer's default constructor called" << std::endl;
}

Serializer::Serializer(const Serializer &rhs)
{
	std::cout << "Serializer's copy constructor called" << std::endl;
	*this = rhs;
}

Serializer &Serializer::operator=(const Serializer &rhs)
{
	std::cout << "Serializer's copy assignment operator called" << std::endl;
	if (this != &rhs)
		;
	return *this;
}

Serializer::~Serializer()
{
	std::cout << "Serializer's destructor called" << std::endl;
}

uintptr_t Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}