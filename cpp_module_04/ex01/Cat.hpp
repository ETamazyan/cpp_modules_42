#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &rhs);
	Cat &operator=(const Cat &rhs);
	virtual ~Cat();

	void makeSound() const;
private:
	Brain *brain;
};

#endif