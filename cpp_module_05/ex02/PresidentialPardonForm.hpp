#pragma once

#define P_SIGN_GRADE 25
#define P_EXEC_GRADE 5

#include "AForm.hpp"
#include <iostream>

class PresidentialPardonForm : public AForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	~PresidentialPardonForm();

	void execute(const Bureaucrat &executor) const;
};
