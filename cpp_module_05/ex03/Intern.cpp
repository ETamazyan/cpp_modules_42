#include "Intern.hpp"

Intern::Intern() {}
Intern::Intern(const Intern &other) { (void)other; }
Intern &Intern::operator=(const Intern &) { return *this; }
Intern::~Intern() {}

typedef AForm *(*FormCreator)(const std::string &);

static AForm *createShrubbery(const std::string &target) { return new ShrubberyCreationForm(target); }
static AForm *createRobotomy(const std::string &target) { return new RobotomyRequestForm(target); }
static AForm *createPardon(const std::string &target) { return new PresidentialPardonForm(target); }

AForm *Intern::makeForm(const std::string &formType, const std::string &formTarget)
{
	struct FormPair
	{
		const char *name;
		FormCreator creator;
	};

	static const FormPair forms[] = {
		{"shrubbery creation", &createShrubbery},
		{"robotomy request", &createRobotomy},
		{"presidential pardon", &createPardon}};

	for (size_t i = 0; i < sizeof(forms) / sizeof(FormPair); ++i)
	{
		if (formType == forms[i].name)
		{
			std::cout << "Intern creates " << formType << std::endl;
			return forms[i].creator(formTarget);
		}
	}
	
	std::cerr << "Intern: unknown form type '" << formType << "'" << std::endl;
		std::cout << "Allowed requests: ";
	for (size_t i = 0; i < sizeof(forms) / sizeof(FormPair); ++i)
	{
		std::cout << "\"" << forms[i].name << "\" ";
	}
	std::cout << std::endl;
	return NULL;
}
