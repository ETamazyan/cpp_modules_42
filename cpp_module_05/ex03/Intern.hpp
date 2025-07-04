#pragma once

#include "./RobotomyRequestForm.hpp"
#include "./ShrubberyCreationForm.hpp"
#include "./PresidentialPardonForm.hpp"

class Intern
{
public:
	Intern();
	Intern(const Intern &other);
	Intern &operator=(const Intern &);
	~Intern();

public:
	// AForm*	makeForm(std::string name, std::string target);

	AForm *makeForm(const std::string &nameForm, const std::string &targetForm);
};
