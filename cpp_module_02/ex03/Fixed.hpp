#pragma once

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &fixed);
		Fixed& operator=(const Fixed& rhs);
		~Fixed();
	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;

		bool	operator>(Fixed rhs) const;
		bool	operator>=(Fixed rhs) const;
		bool	operator<(Fixed rhs) const;
		bool	operator<=(Fixed rhs) const;
		bool	operator==(Fixed rhs) const;
		bool	operator!=(Fixed rhs) const;

		const	Fixed	operator+(Fixed rhs) const;
		const	Fixed	operator-(Fixed rhs) const;
		const	Fixed	operator/(Fixed rhs) const;
		const	Fixed	operator*(Fixed rhs) const;

		Fixed&	operator++();
		Fixed&	operator--();
		const	Fixed	operator++(int);
		const	Fixed	operator--(int);

		static	Fixed &min(Fixed &first, Fixed &second);
		static	const Fixed &min(Fixed const &first, Fixed const &second);
		static	Fixed &max(Fixed &first, Fixed &second);
		static	const Fixed &max(Fixed const &first, Fixed const &second);

	private:
		int num;
		static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);