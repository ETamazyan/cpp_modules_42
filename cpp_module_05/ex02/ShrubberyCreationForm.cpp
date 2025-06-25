#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
// #include <fstream>
// #include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", "Eminem", false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: AForm("ShrubberyCreationForm", target, false, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: AForm(other) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs); // No assignment to const target
	return *this;
}

// void ShrubberyCreationForm::execute(const Bureaucrat &bur) const
// {
// 	if (!getSign()) // ✅ use getter instead of private field
// 		throw AForm::FormNotSignedException();
// 	if (bur.getGrade() > getExecuteGrade())
// 		throw AForm::GradeTooLowException();

// 	std::ofstream file((getTarget() + "_shrubbery")); // ✅ use getTarget()
// 	if (file.is_open())
// 	{
// 		file << "       ,@@@@@@@,\n"
// 				" ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
// 				",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
// 				",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
// 				"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
// 				"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
// 				"`&%\\ ` /%&'    |.|        \\ '|8'\n"
// 				"    |o|        | |         | |\n"
// 				"    |.|        | |         | |\n"
// 				" \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n"
// 				" ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
// 		file.close();
// 	}
// 	else
// 		std::cerr << "Could not open file.\n";
// }

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

// // file <<
// // "          &&& &&  & &&\n"
// // "      && &\\/&\\|& ()|/ @, &&\n"
// // "      &\\/(/&/&||/& /_/)_&/_&\n"
// // "   &() &\\/&|()|/&\\/ '%\" & ()\n"
// // "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n"
// // "&&   && & &| &| /& & % ()& /&&\n"
// // " ()&_---()&\\&\\|&&-&&--%---()~\n"
// // "     &&     \\|||\n"
// // "             |||\n"
// // "             |||\n"
// // "           , -=-~  .-^- _\n";

// // 2.
// //  to be colorfull
// //   file << "\033[1;32m       ,@@@@@@@,\033[0m\n"
// //   		"\033[1;32m ,,,.   ,@@@@@@/@@, \033[0m\033[1;33m .oo8888o.\033[0m\n"
// //   		"\033[1;32m,&%%&%&&%,@@@@@/@@@@@@,\033[0m\033[1;33m8888\\88/8o\033[0m\n"
// //   		"\033[1;32m%&\\%&&%&&%,@@@\\@@@/@@@\033[0m\033[1;33m88\\88888/88'\033[0m\n"
// //   		"\033[1;32m%&&%&%&/%&&%@@\\@@/ /@@@\033[0m\033[1;33m88888\\88888'\033[0m\n"
// //   		"\033[1;32m%&&%/ %&%%&&@@\\ V /@@'\033[0m \033[1;35m`88\\8 `/88'\033[0m\n"
// //   		"\033[1;34m`&%\\ ` /%&'    |.|        \\ '|8'\033[0m\n"
// //   		"\033[1;34m    |o|        | |         | |\033[0m\n"
// //   		"\033[1;34m    |.|        | |         | |\033[0m\n"
// //   		"\033[1;36m \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\033[0m\n";

// 	// if (file.is_open())
// 	// {
// 	// 	file << "              ,@@@@@@@,\n"
// 	// 			"      ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
// 	// 			"   ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
// 	// 			"  ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
// 	// 			"  %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
// 	// 			"  %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
// 	// 			"  `&%\\ ` /%&'    |.|        \\ '|8'\n"
// 	// 			"      |o|        | |         | |\n"
// 	// 			"      |.|        | |         | |\n"
// 	// 			"   \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n"
// 	// 			"   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
// 	// 	file.close();
// 	// }