#pragma once

// Required grades: sign 72, exec 45
// define them
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();
	void execute(const Bureaucrat &bur) const;

	RobotomyRequestForm(const std::string &target);

private:
	std::string target;
};