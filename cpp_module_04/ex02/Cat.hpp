#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"

class Cat : public AAnimal
{
public:
	Cat();
	Cat(const Cat &rhs);
	Cat &operator=(const Cat &rhs);
	virtual ~Cat();

	void makeSound() const;
};

#endif