#include <iostream>
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat high("Alice", 1);	// can do everything
		Bureaucrat mid("Bob", 50);		// can't sign/execute all
		Bureaucrat low("Charlie", 150); // can't do much

		ShrubberyCreationForm shrub("Home");
		RobotomyRequestForm robo("Marvin");
		PresidentialPardonForm pardon("Arthur");

		std::cout << "\n--- Signing Forms ---\n";
		high.signForm(shrub);
		mid.signForm(robo);
		low.signForm(pardon); // should fail

		std::cout << "\n--- Executing Forms ---\n";
		high.executeForm(shrub); // should succeed
		high.executeForm(robo);	 // should succeed (randomly)
		mid.executeForm(robo);	 // might fail if mid is not high enough
		low.executeForm(pardon); // should fail

		std::cout << "\n--- Invalid Grades ---\n";
		try
		{
			Bureaucrat invalid("BadGuy", 200); // too low
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}

		try
		{
			PresidentialPardonForm badForm("Zaphod");
			high.executeForm(badForm); // not signed yet
		}
		catch (const std::exception &e)
		{
			std::cerr << "Exception caught: " << e.what() << std::endl;
		}
	}
	catch (const std::exception &e)
	{
		std::cerr << "Unexpected exception: " << e.what() << std::endl;
	}

	return 0;
}
