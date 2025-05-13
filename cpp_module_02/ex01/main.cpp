#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( 10 );
Fixed const c( 42.42f );
Fixed const d( b );
a = Fixed( 1234.4321f );
std::cout << "a is " << a << std::endl;
std::cout << "b is " << b << std::endl;
std::cout << "c is " << c << std::endl;
std::cout << "d is " << d << std::endl;
std::cout << "a is " << a.toInt() << " as integer" << std::endl;
std::cout << "b is " << b.toInt() << " as integer" << std::endl;
std::cout << "c is " << c.toInt() << " as integer" << std::endl;
std::cout << "d is " << d.toInt() << " as integer" << std::endl;
return 0;
}

// int main(void) {
// 	std::cout << "=== Constructors ===" << std::endl;
// 	Fixed a;
// 	Fixed const b(-5);
// 	Fixed const c(-123.456f);
// 	Fixed const d(3.14159f);

// 	std::cout << "\n=== Copy and Assignment ===" << std::endl;
// 	Fixed e(b);         // Copy constructor
// 	Fixed f;
// 	f = c;              // Assignment operator

// 	std::cout << "\n=== Raw Bit Access ===" << std::endl;
// 	std::cout << "b raw bits: " << b.getRawBits() << std::endl;
// 	std::cout << "c raw bits: " << c.getRawBits() << std::endl;
// 	std::cout << "d raw bits: " << d.getRawBits() << std::endl;

// 	std::cout << "\n=== Float and Int Conversion ===" << std::endl;
// 	std::cout << "b is " << b << " as float, " << b.toInt() << " as int" << std::endl;
// 	std::cout << "c is " << c << " as float, " << c.toInt() << " as int" << std::endl;
// 	std::cout << "d is " << d << " as float, " << d.toInt() << " as int" << std::endl;
// 	std::cout << "e is " << e << " as float, " << e.toInt() << " as int" << std::endl;
// 	std::cout << "f is " << f << " as float, " << f.toInt() << " as int" << std::endl;

// 	std::cout << "\n=== Default object a ===" << std::endl;
// 	std::cout << "a is " << a << " as float, " << a.toInt() << " as int" << std::endl;

// 	return 0;
// }