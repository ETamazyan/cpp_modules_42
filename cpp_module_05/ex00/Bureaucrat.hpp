#pragma once

#include <iostream>
#include <string>

// a Bureaucrat::GradeTooHighException or a Bureaucrat::GradeTooLowException.
class Bureaucraft
{
	public:
		const std::string getName() const;
		int	getGrade() const;

		void increment_grade(int& grade);
		void decrement_grade(int& grade);
	private:
		const std::string name;
		int	grade; // ranges from 1 (highest possible grade) to 150 (lowest possible grade)
};