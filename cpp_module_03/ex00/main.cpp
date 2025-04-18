#include "ClapTrap.hpp"

int main()
{
	std::cout << "=== ClapTrap Constructor Test ===" << std::endl;
	ClapTrap clap1("Alpha");
	ClapTrap clap2("Beta");

	std::cout << "\n=== Attack Test ===" << std::endl;
	clap1.attack("Beta");
	std::cout << "\n=== Damage Test ===" << std::endl;
	clap2.takeDamage(4);
	std::cout << "\n=== Repair Test ===" << std::endl;
	clap2.beRepaired(3);
	std::cout << "\n=== Energy Drain Test ===" << std::endl;
	for (int i = 0; i < 11; ++i)
	{
		clap1.attack("Dummy");
	}
	std::cout << "\n=== Zero HP Test ===" << std::endl;
	clap2.takeDamage(10);
	clap2.attack("Alpha"); // Shouldn't work
	clap2.beRepaired(5);   // Shouldn't work
	std::cout << "\n=== Overkill Damage Test ===" << std::endl;
	clap1.takeDamage(100); // Shouldn't go negative
	std::cout << "\n=== Repair with No Energy Test ===" << std::endl;
	clap1.beRepaired(5); // Should fail due to no energy
	std::cout << "\n=== Destructor Call ===" << std::endl;
	return 0;
}
