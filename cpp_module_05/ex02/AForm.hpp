#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
public:
	AForm();									  // Default ctor
	AForm(const std::string &name, bool is_signed, int sign_grade, int execute_grade); // Ctor with parameters
	AForm(const AForm &other);
	AForm &operator=(const AForm &rhs);
	virtual ~AForm();

	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};
	// ex02
	// class	ExecuteUnsignedForm : public std::exception {
	// 	public:
	// 		const char*	what()	const throw();
	// };

	// getters
	const std::string &getName() const;
	bool getSign() const;
	int getSignGrade() const;
	int getExecuteGrade() const;
	
	// additional fns ex02
	void beSigned(const Bureaucrat &bur);
	virtual void execute(const Bureaucrat& executor) const = 0;
private:
	const std::string name;
	bool is_signed;
	const int sign_grade;
	const int execute_grade;
};

std::ostream &operator<<(std::ostream &os, const AForm &obj);