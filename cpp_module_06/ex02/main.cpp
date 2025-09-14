#include "Base.hpp"

int main(void)
{

	{
		Base *a = Base::generate();

		std::cout << "generating class: ";

		Base::identify(a);

		std::cout << std::endl
				  << "deleting class: ";
		delete a;
	}
	{
		Base base;
		std::cout << "base class: ";
		Base::identify(base);
		std::cout << std::endl;

		A a;
		std::cout << "A class: ";
		Base::identify(a);
		std::cout << std::endl;

		B b;
		std::cout << "B class: ";
		Base::identify(b);
		std::cout << std::endl;

		C c;
		std::cout << "C class: ";
		Base::identify(c);
		std::cout << std::endl;
	}

	return (0);
}