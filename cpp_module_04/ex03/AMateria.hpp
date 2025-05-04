#pragma once

#include <string>
#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;

public:
	AMateria();
	AMateria(const AMateria &type);
	AMateria &operator=(const AMateria &other);
	virtual ~AMateria();
	AMateria(std::string const &type);
	std::string const &getType() const; // Returns the materia type
	virtual AMateria *clone() const = 0;
	virtual void use(ICharacter &target);
};