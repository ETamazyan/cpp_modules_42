#include "Serializer.hpp"

int main(void)
{
	Data meta;
	Data *delta;
	uintptr_t tmp;

	meta.i = 42;
	meta.c = 'a';

	std::cout << "se " << &meta << std::endl;
	tmp = Serializer::serialize(&meta);

	std::cout << "de " << tmp << std::endl;
	delta = Serializer::deserialize(tmp);

	std::cout << "i: " << delta->i << " c: " << delta->c << std::endl;

	if (&meta == delta)
	{
		std::cout << "before " << &meta << std::endl;
		std::cout << "after " << delta << std::endl;
		std::cout << "i: " << delta->i << " c: " << delta->c << std::endl;
	}
	else
	{
		std::cout << "failed\n" << std::endl;
	}

	return (0);
}