#pragma once

// File1: project/src/header.h
// File2: project/include/header.h (same content)
// May be included twice if paths are different
// Both will be included if paths are different:
// #include "project/src/header.h"
// #include "project/include/header.h"  // Same filename, different path

#include <iostream>

class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();

		int getRawBits(void) const;
		void setRawBits(int const raw);
	private:
		int num;
		static const int fractional_bits = 8;
};
