#include "DiamondTrap.hpp"
#include <climits>

int main()
{
	DiamondTrap pers(std::string("Tika"));

	DiamondTrap chlp(pers);
	DiamondTrap agu(std::string("Tyoma"));
	DiamondTrap chad("Gigachad");

	agu = chlp;

	for (int i = 0; i < 15; i++)
	{
		agu.takeDamage(UINT_MAX);
		agu.attack("Atika");
		agu.beRepaired(2);
		agu.highFivesGuys();
		chad.takeDamage(1);
		chad.attack("Atika");
		chad.beRepaired(1);
		chad.highFivesGuys();
	}
	chad.whoAmI();
	return 0;
}

// int main()
// {
// 	DiamondTrap diamond1("DiamondOne");
// 	DiamondTrap diamond2("DiamondTwo");
// 	diamond1.attack("DiamondTwo");
// 	diamond2.takeDamage(30);
// 	diamond2.beRepaired(20);
// 	diamond1.whoAmI();
// 	for (int i = 0; i < 51; ++i)
// 	{
// 		if (i < 10)
// 			std::cout << "0";
// 		std::cout << i << " ";
// 		diamond1.attack("TrainingDummy");
// 	}

// 	std::cout << "\n=== DiamondTrap Zero HP Test ===" << std::endl;
// 	diamond2.takeDamage(100);  // Reduce HP to 0
// 	diamond2.attack("Nobody"); // Should fail
// 	diamond2.beRepaired(10);   // Should also fail

// 	std::cout << "\n=== DiamondTrap Overkill Damage Test ===" << std::endl;
// 	diamond1.takeDamage(999); // More than enough to reduce HP to 0
// 	DiamondTrap diamondCopy(diamond2);
// 	DiamondTrap diamondAssigned = diamond1;

// 	return 0;
// }
