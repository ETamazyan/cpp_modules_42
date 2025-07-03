#include "Bureaucrat.hpp"

// Default ctor with default values
Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

// Parameterized ctor
Bureaucrat::Bureaucrat(const std::string &name, int grade) : name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

// Copy ctor
Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	std::cout << "Bureaucrat copy ctor called!\n";
}

// Assignment operator
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	if (this != &rhs)
		this->grade = rhs.getGrade();
	return *this;
}

// Getters
const std::string &Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

// Exception messages
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "The highest possible grade is 1!";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "The lowest possible grade is 150!";
}

// Grade adjustment
void Bureaucrat::increment_grade()
{
	if (this->grade - 1 < 1)
		throw GradeTooHighException();
	--this->grade;
}

void Bureaucrat::decrement_grade()
{
	if (this->grade + 1 > 150)
		throw GradeTooLowException();
	++this->grade;
}

// Dtor
Bureaucrat::~Bureaucrat() {}

// Stream output
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return os;
}
