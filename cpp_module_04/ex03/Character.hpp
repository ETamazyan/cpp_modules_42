// cheeeeeck
// cheeeeeck
// cheeeeeck
#pragma once

#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"

#ifndef MAT_MAX
#define MAT_MAX 4
#endif

class Character : public ICharacter
{
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& other);
		
		Character& operator=(const Character& other);
		const std::string& getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		
		~Character();
	private:
		std::string name;
		int	materia_count;
		AMateria *inv[MAT_MAX];
};