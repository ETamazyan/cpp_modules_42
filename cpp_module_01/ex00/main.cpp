#include "Zombie.h"

// create static and dynamic zombies anounce them and delete (free) dynamic one and return
int main()
{
	Zombie* zombiee = newZombie("DinamicZombie");
	zombiee->announce();
	randomChump("StaticZombie");

	delete zombiee;
	return (0);
}