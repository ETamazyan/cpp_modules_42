#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	// const AAnimal animal; // compilation error
	std::cout << "___ Creating Dog and Cat objects ___\n"
			  << std::endl;
	const AAnimal *dog = new Dog();
	const AAnimal *cat = new Cat();

	std::cout << "\n___ Making sounds ___\n"
			  << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n___ Deleting animals ___\n"
			  << std::endl;
	delete dog;
	delete cat;

	return (0);
}
