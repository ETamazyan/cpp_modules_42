#pragma once

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


// #pragma once

// // Required grades: sign 25, exec 5
// // use define while initating them

// #include "AForm.hpp"

// class PresidentialPardonForm : public AForm
// {
// public:
// 	PresidentialPardonForm();
// 	PresidentialPardonForm(PresidentialPardonForm &other);
// 	PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
// 	~PresidentialPardonForm();

// 	PresidentialPardonForm(const std::string &target);

// 	void execute(const Bureaucrat &bur) const;

// // private:
// // 	std::string target;
// };