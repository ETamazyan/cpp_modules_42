#pragma once

#include <Bureaucrat.hpp>

class Form
{
public:
	Form();									  // Default constructor
	Form(const std::string &name, bool is_signed, int sign_grade, int execute_grade); // Constructor with parameters
	Form(const Form &other);
	Form &operator=(const Form &rhs);
	~Form();

	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

	// getters
	const string &getName() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	void beSigned(const Bureaucrat &bur);

private:
	const std::string name;
	bool is_signed;
	const int sign_grade;
	const int execute_grade;
};

std::ostream &operator<<(std::ostream &os, const Form &obj);