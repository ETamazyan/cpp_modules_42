#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", "Eminem", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", target, false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (!getSign())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > getExecuteGrade())
		throw AForm::GradeTooLowException();

	std::ofstream file((getTarget() + "_shrubbery").c_str());
	if (file.is_open())
	{
		file << "              ,@@@@@@@,\n"
				"      ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
				"   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
				"  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
				"  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
				"  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
				"  `&%\\ ` /%&'    |.|        \\ '|8'\n"
				"      |o|        | |         | |\n"
				"      |.|        | |         | |\n"
				"   \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n"
				"   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		file.close();
	}
	else
		std::cerr << "Could not open file.\n";
}


ShrubberyCreationForm::~ShrubberyCreationForm() {}