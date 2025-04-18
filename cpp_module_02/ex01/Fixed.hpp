#pragma once

#include <iostream>
#include <cmath>

// • A constructor that takes a constant integer as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value
// should be initialized to 8, like in exercise 00.
// • A constructor that takes a constant floating-point number as a parameter.
// It converts it to the corresponding fixed-point value. The fractional bits value
// should be initialized to 8, like in exercise 00.

class Fixed
{
	public:
		Fixed();
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &fixed);
		Fixed& operator=(const Fixed& fixed);
		~Fixed();
	public:
		// Copy assignment operator called
		// getRawBits member function called
		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		int toInt(void) const;
	private:
		int num;
		static const int fractional_bits = 8;
		// static const int fractional_bits={8}; // can we do?
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);