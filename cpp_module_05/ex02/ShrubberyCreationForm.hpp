#pragma once

// Required grades: sign 145, exec 137
// define them
#include "AForm.hpp"

// Required grades: sign 145, exec 137
// Creates a file <target>_shrubbery in
// the working directory and writes ASCII trees
// inside it.

class ShrubberyCreationForm : public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &rhs);
	~ShrubberyCreationForm();

	void execute(const Bureaucrat &bur) const;

	ShrubberyCreationForm(const std::string &target);

// private:
// 	std::string target;
};