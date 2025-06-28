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
	AForm *makeForm(const std::string &formType, const std::string &formTarget);
};
