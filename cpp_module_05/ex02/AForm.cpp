#include "AForm.hpp"

// Default ctor with default values
AForm::AForm() : name("Default"), is_signed(false), sign_grade(150), execute_grade(150)
{
}

// Parameterized ctor
AForm::AForm(const std::string &name, bool is_signed, const int sign_grade, const int execute_grade)
	: name(name), is_signed(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if (execute_grade < 1 || sign_grade < 1)
		throw GradeTooHighException();
	if (execute_grade > 150 || sign_grade > 150)
		throw GradeTooLowException();
	is_signed = false; // just to compile
}

// Copy ctor
AForm::AForm(const AForm &other) 
: name(other.name), is_signed(false), sign_grade(other.sign_grade), execute_grade(other.execute_grade)
{ *this = other; }

// Assignment operator
AForm& AForm::operator=(const AForm& rhs)
{
	if (this != &rhs)
		this->is_signed = rhs.is_signed;
	return *this;
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return "The highest possible grade for execute or sign is 1!";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "The lowest possible grade for execute or sign is 150!";
}

// Getters
const std::string &AForm::getName() const { return this->name; }

bool AForm::getSign() const { return this->is_signed; }

int AForm::getSignGrade() const { return this->sign_grade; }

int AForm::getExecuteGrade() const { return this->execute_grade; }

// AForm's own function
// nooooooooooooooooooooooot dooooooooooooooooooooooooooonnnnnnnnnnnnnnneeeeeeeeeeeeeeeee
void AForm::beSigned(const Bureaucrat &obj)
{
	if (obj.getGrade() > sign_grade)
		throw AForm::GradeTooLowException();
	else
		is_signed = true;
}

// Dtor
AForm::~AForm()
{
}

// Stream output
std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
	os << "AForm name: " << obj.getName() << ",\n"
	   << "Signed: " << (obj.getSign() ? "is signed," : "is not signed,") << "\nSign_grade: "
	   << obj.getSignGrade() << "\nSign_Exec: "
	   << obj.getExecuteGrade() << ".\n";

	// 	const std::string name;
	// bool is_signed;
	// const int sign_grade;
	// const int execute_grade;
	// std::cout <<
	return os;
}