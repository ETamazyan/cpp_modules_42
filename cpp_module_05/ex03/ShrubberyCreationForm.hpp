#pragma once

// Required grades: sign 145, exec 137
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &bur) const;

	ShrubberyCreationForm(const std::string &target);
};