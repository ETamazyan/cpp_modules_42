#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "The Zombie constructor has been called" << std::endl; 

	return ;
}
Zombie::~Zombie()
{
	std::cout << "Destructor defeated the Zombie named \033[1m" << this->name << "\033[0m" << std::endl;
	
	return ;
}

void Zombie::set_name(std::string name)
{
	this->name = name;
}

std::string Zombie::get_name()
{
	return (this->name);
}
void Zombie::announce(void)
{
	std::cout << "\033[1m" << this->get_name() << "\033[0m: BraiiiiiiinnnzzzZ..." << std::endl;
}
