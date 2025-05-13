#include "Fixed.hpp"

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed::Fixed()
{
	this->num = 0;
}

Fixed::Fixed(const int num)
{
	this->num = num * (1 << this->fractional_bits);
}

Fixed::Fixed(const float num)
{
	this->num = roundf(num * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed &Fixed::operator=(const Fixed &rhs)
{
	if (this != &rhs)
	{
		this->num = rhs.num;
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


Fixed::~Fixed()
{
}

// ******************************************
// ***** TAKE CARE ABOUT THE FOLLOWING ******
// ******************************************

bool Fixed::operator>(Fixed fixed) const
{
	return this->toFloat() > fixed.toFloat();
}

bool Fixed::operator>=(Fixed fixed) const
{
	return this->toFloat() >= fixed.toFloat();
}

bool Fixed::operator<(Fixed fixed) const
{
	return this->toFloat() < fixed.toFloat();
}

bool Fixed::operator<=(Fixed fixed) const
{
	return this->toFloat() <= fixed.toFloat();
}

bool Fixed::operator==(Fixed fixed) const
{
	return this->toFloat() == fixed.toFloat();
}

bool Fixed::operator!=(Fixed fixed) const
{
	return this->toFloat() != fixed.toFloat();
}

const Fixed Fixed::operator+(Fixed fixed) const
{
	return this->toFloat() + fixed.toFloat();
}

const Fixed Fixed::operator-(Fixed fixed) const
{
	return this->toFloat() - fixed.toFloat();
}

const Fixed Fixed::operator/(Fixed fixed) const
{
	return this->toFloat() / fixed.toFloat();
}

const Fixed Fixed::operator*(Fixed fixed) const
{
	return this->toFloat() * fixed.toFloat();
}

Fixed &Fixed::operator++()
{
	this->num++;
	return (*this);
}

Fixed &Fixed::operator--()
{
	this->num--;
	return (*this);
}

const Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++this->num;
	return tmp;
}

const Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--this->num;
	return tmp;
}

Fixed &Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
	{
		return first;
	}

	return second;
}

const Fixed &Fixed::min(Fixed const &first, Fixed const &second)
{
	if (first.toFloat() <= second.toFloat())
	{
		return first;
	}

	return second;
}

Fixed &Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
	{
		return first;
	}

	return second;
}

const Fixed &Fixed::max(Fixed const &first, Fixed const &second)
{
	if (first.toFloat() >= second.toFloat())
	{
		return first;
	}

	return second;
}
