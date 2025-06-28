#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", "Liparid", false, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: AForm("RobotomyRequestForm", target, false, 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: AForm(other) {}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	if (this != &rhs)
		AForm::operator=(rhs);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	if (!getSign())
		throw FormNotSignedException();
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();

	std::cout << "🔩💥 VRRRRRRRRRRRRRRRRRRRRRRRRRRrrrrrrrRRRRRRRRRRRRRRR!!! 🔧🔊 *bzzZZZZzzZzZzZZZzzzzt!* drilling noises" << std::endl;

	if ((std::rand() % 2) == 0)
		std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
	else
		std::cout << "The robotomy of " << getTarget() << " failed." << std::endl;
}
RobotomyRequestForm::~RobotomyRequestForm() {}
