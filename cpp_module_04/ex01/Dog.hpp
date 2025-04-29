#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);
	virtual ~Dog();

	void makeSound() const;
};
