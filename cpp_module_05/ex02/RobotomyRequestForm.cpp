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
    AForm::execute(executor); // This checks if signed + executor grade

    std::cout << "🔩💥 VRRRRRRRRRRRRRRRRRRRRRRRRRRrrrrrrrRRRRRRRRRRRRRRR!!! 🔧🔊 *bzzZZZZzzZzZzZZZzzzzt!* drilling noises" << std::endl;

    if ((std::rand() % 2) == 0)
        std::cout << getTarget() << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "The robotomy of " << getTarget() << " failed." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {}


// #include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("Liparid")
// {
// }

// RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
// {
// }

// RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : AForm(other), target(other.target)
// {
// }

// RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
// {
// 	if (this != &rhs)
// 	{
// 		AForm::operator=(rhs);
// 		this->target = rhs.target;
// 	}
// 	return (*this);
// }

// void RobotomyRequestForm::execute(Bureaucrat const &executor) const
// {
// 	AForm::execute(executor);
// 	std::cout << "🔩💥 VRRRRRRRRRRRRRRRRRRRRRRRRRRrrrrrrrRRRRRRRRRRRRRRR!!! 🔧🔊 *bzzZZZZzzZzZzZZZzzzzt!* ";
// 	std::cout << "drilling noises" << std::endl;
// 	if ((std::rand() % 2) == 0)
// 		std::cout << target << " has been robotomized successfully!" << std::endl;
// 	else
// 		std::cout << "The robotomy of " << target << " failed." << std::endl;
// }

// RobotomyRequestForm::~RobotomyRequestForm()
// {
// }
