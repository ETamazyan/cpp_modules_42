#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &type);

	Cure *clone() const;
	Cure &operator=(const Cure &other);

	const std::string &getType() const;
	void use(ICharacter &target);

	~Cure();
};