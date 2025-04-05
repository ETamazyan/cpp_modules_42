#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->m_name = name;
	std::cout << "HumanB named '" << this->m_name << "' has been successfully created!" << std::endl;
}
HumanB::~HumanB()
{
	std::cout << "HumanB named '" << this->m_name << "' is being destroyed." << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->m_weapon = &weapon;
}

Weapon *HumanB::getWeapon() const
{
	return (this->m_weapon);
}

void HumanB::attack()
{
	std::cout << this->m_name << " attacks with their " << this->m_weapon->getType() << std::endl;
	//  <weapon type>
}