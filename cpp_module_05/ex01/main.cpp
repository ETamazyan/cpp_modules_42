#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat a("Anne", 2);
		std::cout << a << std::endl;

		a.increment_grade();
		std::cout << a << std::endl;

		a.increment_grade();
	}
	catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;
	try {
		Bureaucrat b("Marilyn", 0);
	}
	catch (const std::exception &e) {
		std::cerr << "Failed to create Bob: " << e.what() << std::endl;
	}
	try {
		Bureaucrat c("Emma", 151);
	}
	catch (const std::exception &e) {
		std::cerr << "Failed to create Charlie: " << e.what() << std::endl;
	}
	std::cout << "----------------------" << std::endl;
	try {
		Bureaucrat d("Diana", 149);
		std::cout << d << std::endl;
		d.decrement_grade(); // grade becomes 150
		std::cout << d << std::endl;
		d.decrement_grade(); // should throw
	}
	catch (const std::exception &e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}
	return (0);
}
