#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: m_weapon(weapon)  //  Initializer list
{
	this->m_name = name;
	std::cout << "HumanA named '" << this->m_name << "' has been successfully created!" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA named '" << this->m_name << "' is being destroyed." << std::endl;
}

void HumanA::attack()
{
	std::cout << this->m_name << " attacks with their " << this->m_weapon.getType() << std::endl;
	// cout e anelu this-i <name>, <weapon type>
}