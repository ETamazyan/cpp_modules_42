#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;
	if (argc != 2)
	{
		std::cout << "ERROR: Seriously? Only one argument, please! How hard is it to follow simple instructions?!" << std::endl;
		return 0;
	}
	harl.complain(argv[1]);
	return 0;
}