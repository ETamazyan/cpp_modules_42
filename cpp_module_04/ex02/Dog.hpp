#pragma once

#include "AAnimal.hpp"

class Dog : public AAnimal
{
public:
	Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);
	virtual ~Dog();

	void makeSound() const;
};
