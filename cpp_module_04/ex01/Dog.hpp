#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
public:
	Dog();
	Dog(const Dog &rhs);
	Dog &operator=(const Dog &rhs);
	virtual ~Dog();

	void makeSound() const;
private:
	Brain *brain;
};
