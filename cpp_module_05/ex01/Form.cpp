#include "Form.hpp"

// Default ctor with default values
Form::Form() : name("Default"), is_signed(false), sign_grade(150), execute_grade(150)
{
}

// Parameterized ctor
Form::Form(const std::string &name, bool is_signed, const int sign_grade, const int execute_grade)
	: name(name), is_signed(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if (execute_grade < 1 || sign_grade < 1)
		throw GradeTooHighException();
	if (execute_grade > 150 || sign_grade > 150)
		throw GradeTooLowException();
	// is_signed = false; // if needed
}

// Copy ctor
Form::Form(const Form &other) { *this = other; }

// Assignment operator
Form &Form::operator=(const Form &rhs)
{
	if (*this == rhs)
		return (*this);
	this->is_signed = other.is_signed;
	return *this;
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "The highest possible grade for execute or sign is 1!";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "The lowest possible grade for execute or sign is 150!";
}

// Getters
const string &Form::getName() const { return this->name; }

bool Form::getSign() const { return this->is_signed; }

int Form::getSignGrade() const { return this->sign_grade; }

int Form::getExecuteGrade() const { return this->execute_grade; }

// Form's own function
void Form::beSigned(const Bureaucrat &obj)
{
}

// Dtor
Form::~Form()
{
}

// Stream output
std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << "Name: " << obj.getName << ",\n"
	   << "Signed: " << obj.getSign << "\nSign_grade: "
	   << obj.getSignGrade << "\nSign_Exec: "
	   << obj.getExecuteGrade << ".\n";

	// 	const std::string name;
	// bool is_signed;
	// const int sign_grade;
	// const int execute_grade;
	// std::cout <<
	return os;
}