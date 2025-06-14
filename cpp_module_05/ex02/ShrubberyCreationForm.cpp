#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &other) :target(other.target){*this = other;}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	// if (this != &other) {
	// 	AForm::operator=(other); // this line
	// 	this->target = other.target;
	// }
	// calls the base class's copy assignment operator.
	if (this != &rhs)
		this->target = rhs.target;
	return *this;
}

//not done
void ShrubberyCreationForm::execute(const Bureaucrat &bur) const
{}

// not done
ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
{}


ShrubberyCreationForm::~ShrubberyCreationForm()
{}