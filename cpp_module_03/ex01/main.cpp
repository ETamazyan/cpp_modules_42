#include "ScavTrap.hpp"

int main()
{
	std::cout << "=== ClapTrap Test ===\n";
	ClapTrap alpha("Alpha");
	ClapTrap beta("Beta");

	alpha.attack("Beta");
	beta.takeDamage(4);
	beta.beRepaired(3);

	std::cout << "\n=== ClapTrap Energy Exhaustion ===\n";
	for (int i = 0; i < 11; ++i)
		alpha.attack("Dummy"); // 10 energy points max

	std::cout << "\n=== ClapTrap Zero HP ===\n";
	beta.takeDamage(10);
	beta.attack("Someone"); // should fail
	beta.beRepaired(5);		// should fail

	std::cout << "\n=== ScavTrap Test ===\n";
	ScavTrap serena("Serena");
	serena.attack("Bandit");
	serena.guardGate();

	std::cout << "\n=== ScavTrap Energy Exhaustion ===\n";
	for (int i = 0; i < 51; ++i)
	{
		std::cout << i << " ";
		serena.attack("Dummy"); // Should stop at 50
	}

	std::cout << "\n=== ScavTrap Zero HP ===\n";
	ScavTrap wrecked("WreckedBot");
	wrecked.takeDamage(100);
	wrecked.attack("Enemy"); // should fail
	wrecked.beRepaired(10);	 // should fail

	std::cout << "\n=== Copy Constructor Test ===\n";
	ScavTrap copy(serena); // copy constructor

	std::cout << "\n=== End of Test ===\n";
	return 0;
}
