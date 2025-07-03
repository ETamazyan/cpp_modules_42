#include "Form.hpp"

// Default ctor with default values
Form::Form() : name("Default"), is_signed(false), sign_grade(150), execute_grade(150)
{
}

// Parameterized ctor
Form::Form(const std::string &name, const int sign_grade, const int execute_grade)
	: name(name), is_signed(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if (execute_grade < 1 || sign_grade < 1)
		throw GradeTooHighException();
	if (execute_grade > 150 || sign_grade > 150)
		throw GradeTooLowException();
}

// Copy ctor
Form::Form(const Form &other) 
: name(other.name), is_signed(other.is_signed), sign_grade(other.sign_grade), execute_grade(other.execute_grade)
{ *this = other; }

// Assignment operator
Form& Form::operator=(const Form& rhs)
{
	if (this != &rhs)
		this->is_signed = rhs.is_signed;
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
const std::string &Form::getName() const { return this->name; }

bool Form::getSign() const { return this->is_signed; }

int Form::getSignGrade() const { return this->sign_grade; }

int Form::getExecuteGrade() const { return this->execute_grade; }

// Form's own function
void Form::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > sign_grade)
		throw Form::GradeTooLowException();
	else
		is_signed = true;
}

// Dtor
Form::~Form()
{
}

// Stream output
std::ostream &operator<<(std::ostream &os, const Form &obj)
{
	os << "Form name: " << obj.getName() << ",\n"
	   << "Signed: " << (obj.getSign() ? "is signed," : "is not signed,") << "\nSign_Grade: "
	   << obj.getSignGrade() << "\nSign_Exec: "
	   << obj.getExecuteGrade() << ".\n";
	return os;
}