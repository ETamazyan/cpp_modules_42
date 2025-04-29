#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Default constructor of Brain called" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Copy constructor of Brain called" << std::endl;
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Copy assignment of Brain operator called" << std::endl;
	if (this != &rhs)
	{
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destructor of Brain called" << std::endl;
}