#pragma once

#include <iostream>

class Fixed
{
	public:
		Fixed(const Fixed &fixed);
		Fixed& operator=(const Fixed& fixed);
		Fixed();
		~Fixed();
		// Copy assignment operator calle
		// getRawBits member function called
	public:
		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int num;
		static const int fractional_bits = 8;
		// static const int fractional_bits={8}; // can we do?
};

