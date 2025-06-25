// #pragma once

// // Required grades: sign 72, exec 45
// // define them
// #include "AForm.hpp"

// class RobotomyRequestForm : public AForm
// {
// public:
// 	RobotomyRequestForm();
// 	RobotomyRequestForm(RobotomyRequestForm &other);
// 	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
// 	~RobotomyRequestForm();

// 	void execute(const Bureaucrat &bur) const;

// 	RobotomyRequestForm(const std::string &target);

// // private:
// // 	std::string target;
// };

#pragma once

#include "AForm.hpp"
#include <cstdlib> // for rand()
#include <iostream>

class RobotomyRequestForm : public AForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &rhs);
	~RobotomyRequestForm();

	void execute(const Bureaucrat &executor) const;
};
