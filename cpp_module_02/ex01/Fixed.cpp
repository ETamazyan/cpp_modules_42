#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
}

Fixed::Fixed(const int num)
{
	std::cout << "Int constructor called" << std::endl;
	this->num = num * (1 << this->fractional_bits);
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->num = roundf(num * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
	{
		this->num = fixed.num;
	}
	return *this;
}

int Fixed::getRawBits(void) const
{
	return this->num;
}

void Fixed::setRawBits(int const raw)
{
	this->num = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->num / (1 << this->fractional_bits));
}

int Fixed::toInt(void) const
{
	return this->num >> this->fractional_bits;
}