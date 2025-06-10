#pragma once

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
public:
	Bureaucrat(); // Default constructor
	Bureaucrat(const std::string &name, int grade); // Constructor with parameters
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	~Bureaucrat();

	const std::string &getName() const;
	int getGrade() const;
	void increment_grade();
	void decrement_grade();

	void	signForm(Form &form);

	struct GradeTooHighException : public std::exception
	{
		const char *what() const throw();
	};
	struct GradeTooLowException : public std::exception
	{
		const char *what() const throw();
	};

private:
	const std::string name;
	int grade; // Ranges from 1 (highest) to 150 (lowest)
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);


// *************************************
// // What Can Go Wrong (Corner Cases)
// // 1. Object Slicing
// // If you catch by value instead of reference, you slice off derived class parts:
// // {
// // catch (MyException e)  // BAD: Slicing, loses polymorphism
// // catch (const MyException& e)  // GOOD
// // }
// // 2. Memory Leaks
// // If you throw a raw pointer, and forget to delete it (DON’T DO THIS):
// // {
// // throw new MyException();  // BAD: leads to memory leak
// // Use automatic storage instead:
// // throw MyException();  // GOOD
// // }

// // 3. Not Catching by Reference
// // This breaks polymorphism and can cause unnecessary copying:
// // {
// // catch (std::exception e)  // BAD
// // catch (const std::exception& e)  // GOOD
// // }
// // 4. Throwing from Destructors
// // Avoid throwing from destructors! If another exception is active, calling throw in destructor causes std::terminate().
// // {
// // ~MyClass() {
// //     throw std::runtime_error("Bad");  // DANGEROUS
// // }
// // }

// // ---------------------------
// // | Myth                                          | Reality                                                                                        |
// // | --------------------------------------------- | ---------------------------------------------------------------------------------------------- |
// // | "Exceptions are slow, don’t use them."        | True **only** if thrown frequently. Use them for **exceptional** situations, not flow control. |
// // | "You must use `throw` everywhere for safety." | Overuse of exceptions clutters logic. Use only for **unexpected** errors.                      |
// // | "std::exception is just a basic class."       | It has a polymorphic interface. Always override `what()` for meaningful messages.              |
// // | "I can catch `...` and be safe."              | `catch(...)` is dangerous unless you re-throw. You lose error details.                         |
