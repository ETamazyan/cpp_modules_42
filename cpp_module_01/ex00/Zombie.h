#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
public:
	Zombie(std::string name);
	~Zombie();
	void announce(void); // announce themselves as follows BraiiiiiiinnnzzzZ...
	void set_name(std::string name);
	std::string get_name();
	private:
	std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif