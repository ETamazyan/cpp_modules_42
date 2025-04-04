#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	Zombie *zombies;

	zombies = new Zombie[N]();
	for (int i = 0; i < N; i++)
		zombies[i].set_name(name);
	
		//deallocation
		// delete[] zombies;
	return zombies;
}

// #include "Zombie.h"

// Zombie *newZombie(std::string name)
// {
// 	return (new Zombie(name));
// }