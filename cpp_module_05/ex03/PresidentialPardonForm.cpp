#include "PresidentialPardonForm.hpp"

#define SIGN_GRADE 25
#define EXEC_GRADE 5

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", "PR_def", false, SIGN_GRADE, EXEC_GRADE) {}

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
	if (!getSign())
		throw FormNotSignedException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();

	std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {}
