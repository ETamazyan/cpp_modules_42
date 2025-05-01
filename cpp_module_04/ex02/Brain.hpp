#pragma once

#include "AAnimal.hpp"

class Brain
{

public:
	Brain();
	Brain(const Brain &rhs);
	Brain &operator=(const Brain &rhs);
	~Brain();

private:
	std::string ideas[100];
};