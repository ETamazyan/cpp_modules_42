// cheeeeeck
// cheeeeeck
// cheeeeeck
#pragma once

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#ifndef MTR_MAX
# define MTR_MAX 4
#endif

class MateriaSource : public IMateriaSource 
{
	public:
	//Orthodox
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	~MateriaSource();
	
	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
	private:
		int materia_count;
		AMateria *slots[4];
};
