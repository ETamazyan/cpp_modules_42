#pragma once

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
public:
	Animal();
	Animal(const std::string &type);
	Animal(const Animal &rhs);
	Animal &operator=(const Animal &rhs);
	virtual ~Animal();

	virtual void makeSound() const;
	std::string getType() const;

protected:
	std::string type;
};

#endif