#include "PresidentialPardonForm.hpp"

// Define grades as constants
#define SIGN_GRADE 25
#define EXEC_GRADE 5

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", "CoolOne", false, SIGN_GRADE, EXEC_GRADE) {}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: AForm("PresidentialPardonForm", target, false, SIGN_GRADE, EXEC_GRADE) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: AForm(other) {}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor); // Validate form is signed and grade is sufficient

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

// #include "PresidentialPardonForm.hpp"

// PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("CoolOne")
// {
// }

// PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
// {
// }

// PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : AForm(other), target(other.target)
// {
// }

// PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
// {
// 	if (this != &rhs)
// 	{
// 		AForm::operator=(rhs);
// 		this->target = rhs.target;
// 	}
// 	return (*this);
// }

// void PresidentialPardonForm::execute(Bureaucrat const &bur) const
// {
// 	AForm::execute(bur);
// }

// PresidentialPardonForm::~PresidentialPardonForm()
// {
// }
