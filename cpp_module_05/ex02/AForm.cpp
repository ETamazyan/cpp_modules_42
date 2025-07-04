#include "AForm.hpp"
#include "Bureaucrat.hpp"

// Default ctor
AForm::AForm() : name("Default"), target("None"), is_signed(false), sign_grade(150), execute_grade(150) {}

// Param ctor
AForm::AForm(const std::string &name, const std::string &target, bool is_signed, int sign_grade, int execute_grade)
	: name(name), target(target), is_signed(false), sign_grade(sign_grade), execute_grade(execute_grade)
{
	if (sign_grade < 1 || execute_grade < 1)
		throw GradeTooHighException();
	if (sign_grade > 150 || execute_grade > 150)
		throw GradeTooLowException();
	static_cast<void>(is_signed);
}

// Copy ctor
AForm::AForm(const AForm &other)
	: name(other.name), target(other.target), is_signed(other.is_signed), sign_grade(other.sign_grade), execute_grade(other.execute_grade)
{
}

// Assignment operator
AForm &AForm::operator=(const AForm &rhs)
{
	if (this != &rhs)
		this->is_signed = rhs.is_signed;
	return *this;
}

// Destructor
AForm::~AForm() {}

// Getters
const std::string &AForm::getName() const { return name; }
const std::string &AForm::getTarget() const { return target; }
bool AForm::getSign() const { return is_signed; }
int AForm::getSignGrade() const { return sign_grade; }
int AForm::getExecuteGrade() const { return execute_grade; }

// Be signed
void AForm::beSigned(const Bureaucrat &bur)
{
	if (bur.getGrade() > sign_grade)
		throw GradeTooLowException();
	else
		is_signed = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (is_signed == false)
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > execute_grade)
		throw AForm::GradeTooLowException();
}

// Exceptions
const char *AForm::GradeTooHighException::what() const throw() { return "Grade too high!"; }
const char *AForm::GradeTooLowException::what() const throw() { return "Grade too low!"; }
const char *AForm::FormNotSignedException::what() const throw() { return "Form is not signed!"; }

// Output operator
std::ostream &operator<<(std::ostream &os, const AForm &obj)
{
	os << "Form name: " << obj.getName() << ",\n"
	   << "Signed: " << (obj.getSign() ? "is signed," : "is not signed,") << "\nSign_Grade: "
	   << obj.getSignGrade() << "\nSign_Exec: "
	   << obj.getExecuteGrade() << ".\n";
	return os;
}