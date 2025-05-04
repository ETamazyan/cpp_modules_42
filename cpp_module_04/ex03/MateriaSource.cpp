#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : materia_count(0)
{
	for (int i = 0; i < MTR_MAX; i++)
		this->slots[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		this->materia_count = other.materia_count;
		for (int i = 0; i < MTR_MAX; i++)
			this->slots[i] = (*other.slots[i]).clone();
	}
	return (*this);
}

// MateriaSource &MateriaSource::operator=(const MateriaSource &other)
// {
// 	if (this != &other)
// 	{
// 		for (int i = 0; i < MTR_MAX; ++i)
// 		{
// 			delete materias[i];
// 			materias[i] = other.materias[i] ? other.materias[i]->clone() : NULL;
// 		}
// 	}
// 	return (*this);
// }

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < MTR_MAX; i++)
	{
		if (this->slots[i] == NULL)
		{
			this->slots[i] = m;
			break;
		}
	}
}

//Returns a new Materia. The latter is a copy of the Materia previously learned by
// the MateriaSource whose type equals the one passed as parameter. Returns 0 if
// the type is unknown.

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < MTR_MAX && this->slots[i] != NULL; i++)
	{
		if (this->slots[i]->getType() == type)
			return this->slots[i]->clone();
	}
	return (NULL);
}

MateriaSource::~MateriaSource()
{
}