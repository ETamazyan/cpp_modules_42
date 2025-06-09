#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(); // Default constructor
	Bureaucrat(const std::string &name, int grade); // Constructor with parameters
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;
	void increment_grade();
	void decrement_grade();

	void	signForm(Form &form);

	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

private:
	const std::string name;
	int grade; // Ranges from 1 (highest) to 150 (lowest)
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);
