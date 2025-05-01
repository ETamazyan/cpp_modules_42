#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	std::cout << "=== FragTrap Constructor Test ===" << std::endl;
	FragTrap frag1("Fraggie");
	FragTrap frag2("Boomer");

	std::cout << "\n=== FragTrap Attack Test ===" << std::endl;
	frag1.attack("Boomer");

	std::cout << "\n=== FragTrap Damage Test ===" << std::endl;
	frag2.takeDamage(40);

	std::cout << "\n=== FragTrap Repair Test ===" << std::endl;
	frag2.beRepaired(20);

	std::cout << "\n=== FragTrap High Fives Test ===" << std::endl;
	frag1.highFivesGuys();

	std::cout << "\n=== FragTrap Energy Drain Test ===" << std::endl;
	for (int i = 0; i < 101; ++i)
	{
		frag1.attack("Dummy");
	}

	std::cout << "\n=== FragTrap Zero HP Test ===" << std::endl;
	frag2.takeDamage(100);	// Should reduce HP to 0
	frag2.attack("Anyone"); // Should fail
	frag2.beRepaired(10);	// Should also fail

	std::cout << "\n=== FragTrap Overkill Damage Test ===" << std::endl;
	frag1.takeDamage(999); // Way more than needed

	std::cout << "\n=== FragTrap Copy/Assignment Test ===" << std::endl;
	FragTrap fragCopy(frag2);
	FragTrap fragAssigned = frag1;

	std::cout << "\n=== FragTrap Destructor Call ===" << std::endl;
	return 0;
}
