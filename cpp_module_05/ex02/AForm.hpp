#pragma once

#include "Bureaucrat.hpp"
#include <string>
#include <iostream>
#include <fstream>

class Bureaucrat;

class AForm
{
public:
	AForm(); // Default ctor
	AForm(const std::string &name, const std::string &target, bool is_signed, int sign_grade, int execute_grade); // Param ctor
	AForm(const AForm &other);
	AForm &operator=(const AForm &rhs);
	virtual ~AForm();

	// Getters
	const std::string &getName() const;
	const std::string &getTarget() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	// Signing and execution
	void beSigned(const Bureaucrat &bur);
	virtual void execute(const Bureaucrat &executor) const = 0;

	// Exceptions
	struct GradeTooHighException : public std::exception {
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception {
		const char *what() const throw();
	};
	struct FormNotSignedException : public std::exception {
		const char *what() const throw();
	};

private:
	const std::string name;
	const std::string target;
	bool is_signed;
	const int sign_grade;
	const int execute_grade;
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);
