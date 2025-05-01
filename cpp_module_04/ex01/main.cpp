#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
	Animal animal;
	animal.makeSound();
	std::cout << "--- Creating Dog and Cat objects ---\n"
			  << std::endl;
	const Animal *dog = new Dog();
	const Animal *cat = new Cat();

	std::cout << "\n--- Making sounds ---\n"
			  << std::endl;
	dog->makeSound();
	cat->makeSound();

	std::cout << "\n--- Deleting animals ---\n"
			  << std::endl;
	delete dog;
	delete cat;

	return (0);
}
