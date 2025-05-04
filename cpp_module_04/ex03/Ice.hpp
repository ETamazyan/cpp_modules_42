#pragma once

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &type);

	Ice *clone() const;
	Ice &operator=(const Ice &other);

	const std::string &getType() const;
	void use(ICharacter &target);

	~Ice();
};