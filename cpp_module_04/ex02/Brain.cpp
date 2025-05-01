#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain is created with an empty set of ideas!" << std::endl;
}

Brain::Brain(const Brain &rhs)
{
	std::cout << "Brain copy constructor: Cloning the set of ideas!" << std::endl;
	*this = rhs;
}

Brain &Brain::operator=(const Brain &rhs)
{
	std::cout << "Brain copy assignment operator: Assigning a new set of ideas!" << std::endl;
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
	std::cout << "Brain is being destroyed, saying goodbye to all the ideas!" << std::endl;
}
