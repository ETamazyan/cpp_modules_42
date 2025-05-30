#include "Fixed.hpp"

Fixed::Fixed()
{
	this->num = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	this->num = fixed.num;
	std::cout << "Copy constructor" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	if (this == &fixed)
		return *this;
	this->num = fixed.getRawBits();
	std::cout << "Copy assignment operator called" << std::endl;
	return *this;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->num = raw;
}

Fixed::~Fixed()
{
	// std::cout << "Verjin xosq" << std::endl;
	std::cout << "Destructor called" << std::endl;
}