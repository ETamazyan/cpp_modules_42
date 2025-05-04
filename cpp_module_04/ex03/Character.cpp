// cheeeeeck
// cheeeeeck
// cheeeeeck
#include "Character.hpp"

Character::Character() : name("Default"), materia_count(0)
{
	for (int i = 0; i < MAT_MAX; i++)
		this->inv[i] = NULL;
}
Character::Character(const std::string &name) : name(name), materia_count(0)
{
	for (int i = 0; i < MAT_MAX; i++)
		this->inv[i] = NULL;
}
Character::Character(const Character &other)
{
	*this = other;
}
Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->materia_count = other.materia_count;
		for (int i = 0; i < MAT_MAX; i++)
		{
			delete this->inv[i];
			this->inv[i] = (*other.inv[i]).clone();
		}
	}
	return (*this);
}

const std::string &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if (this->materia_count < MAT_MAX)
	{
		for (int i = 0; i < MAT_MAX; i++)
		{
			if (this->inv[i] == NULL)
			{
				this->inv[i] = m;
				++this->materia_count;
				break;
			}
		}
	}
}
void Character::unequip(int idx)
{
	if (idx < MAT_MAX && this->inv[idx] != NULL)
	{
		this->inv[idx] = NULL;
		this->materia_count--;
	}
}
void Character::use(int idx, ICharacter &target)
{
	if (idx < MAT_MAX && this->inv[idx] != NULL)
		(*this->inv[idx]).use(target);
}
Character::~Character() {}