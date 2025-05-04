// #include "IMateriaSource.hpp"
// #include "AMateria.hpp"
// #include "ICharacter.hpp"

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"


// int main()
// {
// 	IMateriaSource *src = new MateriaSource();
// 	src->learnMateria(new Ice());
// 	src->learnMateria(new Cure());

// 	ICharacter *me = new Character("me");

// 	AMateria *tmp;
// 	tmp = src->createMateria("ice");
// 	me->equip(tmp);
// 	tmp = src->createMateria("cure");
// 	me->equip(tmp);

// 	ICharacter *bob = new Character("bob");

// 	me->use(0, *bob); // Ice attack
// 	me->use(1, *bob); // Cure

// 	delete bob;
// 	delete me;
// 	delete src;
// 	return (0);
// }


int main()
{
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *alice = new Character("Alice");
	AMateria *tmp;
	tmp = src->createMateria("ice");
	alice->equip(tmp);
	tmp = src->createMateria("cure");
	alice->equip(tmp);
	tmp = src->createMateria("cure");
	alice->equip(tmp);

	ICharacter *copy = new Character(*dynamic_cast<Character *>(alice));
	std::cout << "Testing deep copy of Character:" << std::endl;
	copy->use(0, *alice);
	copy->use(1, *alice);
	alice->use(0, *alice);
	alice->use(1, *alice);
	// std::cout << alice->getMateria(0) << " " << copy->getMateria(0) << std::endl;

	delete copy;
	delete alice;
	delete src;
	//	main_a();
	return 0;
}