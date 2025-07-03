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
		file << "          &&& &&  & &&\n"
				"      && &\\/&\\|& ()|/ @, &&\n"
				"      &\\/(/&/&||/& /_/)_&/_&\n"
				"   &() &\\/&|()|/&\\/ '%\" & ()\n"
				"  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
				"&&   && & &| &| /& & % ()& /&&\n"
				" ()&_---()&\\&\\|&&-&&--%---()~\n"
				"     &&     \\|||\n"
				"             |||\n"
				"             |||\n"
				"           , -=-~  .-^- _\n";
		file.close();
	}
	else
		std::cerr << "Could not open file.\n";
}


ShrubberyCreationForm::~ShrubberyCreationForm() {}