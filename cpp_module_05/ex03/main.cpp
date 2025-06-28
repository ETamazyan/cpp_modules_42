#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;

    AForm *form1 = intern.makeForm("robotomy request", "Bender");
    AForm *form2 = intern.makeForm("presidential pardon", "Arthur Dent");
    AForm *form3 = intern.makeForm("shrubbery creation", "Earth");
    AForm *form4 = intern.makeForm("unknown form", "Nobody");

    Bureaucrat boss("Boss", 1);

    std::cout << "\n--- Signing and Executing Created Forms ---\n";
    if (form1)
    {
        boss.signForm(*form1);
        boss.executeForm(*form1);
    }
    if (form2)
    {
        boss.signForm(*form2);
        boss.executeForm(*form2);
    }
    if (form3)
    {
        boss.signForm(*form3);
        boss.executeForm(*form3);
    }

    delete form1;
    delete form2;
    delete form3;
    delete form4;

    return 0;
}
