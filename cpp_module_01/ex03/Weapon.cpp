#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
	std::cout << "A new weapon of type '" << this->m_type << "' has been successfully created!" << std::endl;
}
Weapon::~Weapon()
{
	std::cout << "Weapon of type '" << this->m_type << "' is being destroyed and cleaned up." << std::endl;
}
std::string Weapon::getType() const
{
	return (this->m_type);
}

void Weapon::setType(const std::string &type)
{
	this->m_type = type;
	return;
}
