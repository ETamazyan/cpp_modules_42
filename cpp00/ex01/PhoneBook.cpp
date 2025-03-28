#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(int *i, int t)
{
	this->contacts[(*i)].set_first_name(edit_get_inp("Enter first name: "));
	this->contacts[(*i)].set_last_name(edit_get_inp("Enter last name: "));
	this->contacts[(*i)].set_nickname(edit_get_inp("Enter nickname: "));
	this->contacts[(*i)].set_phone_number(edit_get_inp("Enter phone number: "));
	this->contacts[(*i)].set_darkest_secret(edit_get_inp("Enter darkest secret: "));
	if (ft_isalpha(this->contacts[(*i)].get_first_name()) && ft_isalpha(this->contacts[(*i)].get_last_name()))
			std::cout << "Error: Names cannot contain non-alphabetical characters!" << std::endl;
	if (ft_isdigit(this->contacts[(*i)].get_phone_number()) == 1)
			std::cout << "Error: Phone number cannot contain non-numeric characters!" << std::endl;
	std::cout << "add_contact end = " << (getLocalTime() - time) <<std::endl;
	(*i)++;
	std::cout << "Contact added successfully" << std::endl;
}