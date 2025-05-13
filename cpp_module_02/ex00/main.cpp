#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}

// int main(void) {
// 	Fixed a;
// 	std::cout << "Initial raw bits of a: " << a.getRawBits() << std::endl;
// 	a.setRawBits(12345);
// 	std::cout << "Raw bits of a after setRawBits(12345): " << a.getRawBits() << std::endl;
// 	Fixed b(a);
// 	std::cout << "Raw bits of b (copy of a): " << b.getRawBits() << std::endl;
// 	Fixed c;
// 	c.setRawBits(42);
// 	std::cout << "Raw bits of c before assignment: " << c.getRawBits() << std::endl;
// 	c = b;
// 	std::cout << "Raw bits of c after assignment from b: " << c.getRawBits() << std::endl;
// 	return 0;
// }
