#pragma once

// Required grades: sign 25, exec 5
// define them
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();
	void execute(const Bureaucrat &bur) const;

	PresidentialPardonForm(const std::string &target);

private:
	std::string target;
};