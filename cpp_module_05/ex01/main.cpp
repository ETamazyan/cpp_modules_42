#include "Bureaucrat.hpp"

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    std::cout << "---- Creating Bureaucrats ----" << std::endl;
    try {
        Bureaucrat b1("Alice", 3);
        Bureaucrat b2("Bob", 150);
        Bureaucrat b3("Charlie", 1);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        std::cout << "\n---- Creating Forms ----" << std::endl;
        Form f1("TopSecret", false, 1, 1);
        Form f2("LowPriority", false, 150, 150);
        Form f3("MidLevel", false, 75, 75);

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;

        std::cout << "\n---- Signing Forms ----" << std::endl;
        b2.signForm(f2);  // Should succeed
        b1.signForm(f3);  // Should succeed
        b2.signForm(f1);  // Should fail (grade too low)
        b3.signForm(f1);  // Should succeed

        std::cout << "\n---- Signed Form States ----" << std::endl;
        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;
    }
    catch (std::exception &e) {
        std::cerr << "Exception caught in main: " << e.what() << std::endl;
    }

    std::cout << "\n---- Invalid Form Creation ----" << std::endl;
    try {
        Form invalid("ImpossibleForm", false, 0, 200); // Should throw
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    std::cout << "\n---- Invalid Bureaucrat Creation ----" << std::endl;
    try {
        Bureaucrat invalidBureaucrat("ErrorGuy", 151); // Should throw
    }
    catch (std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
