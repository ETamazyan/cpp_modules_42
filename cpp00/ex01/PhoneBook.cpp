#include "PhoneBook.hpp"

// ************************
#include <iostream>
#include <iomanip>  // for std::setw, std::right
#include <string>
#include <sstream>
// ************************


PhoneBook::PhoneBook()
{
	this->contacts_amount = 0;
}

PhoneBook::~PhoneBook()
{
}
int PhoneBook::get_amount()
{
	return (this->contacts_amount);
}

// display design
std::string formatColumn(std::string text)
{
	if (text.length() > 10) {
		return text.substr(0, 9) + ".";
	}
	return std::string(10 - text.length(), ' ') + text;
}

// void PhoneBook::displayContacts() const {
void PhoneBook::displayContacts()
{
	// Contact contact;


	int contactCount = this->get_amount();
	std::cout << contactCount << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < contactCount; ++i)
	{
		if (std::cin.eof())
			return ;
		std::cout << "|" << std::setw(10) << (i + 1)
				  << "|" << formatColumn(this->contacts[i].get_first_name())
				  << "|" << formatColumn(this->contacts[i].get_last_name())
				  << "|" << formatColumn(this->contacts[i].get_nickname())
				  << "|" << std::endl;
	}
}

// display design


static int my_stoi(const std::string& str)
{
	int result = 0;
	int sign = 1;
	size_t i = 0;
	char ch;
	int digit;

	if (str.empty())
		return 0;
	while (i < str.size() && (str[i] == ' ' || str[i] == '\t'))
		i++;
	if (i < str.size() && (str[i] == '-' || str[i] == '+')) {
		sign = (str[i] == '-') ? -1 : 1;
		i++;
	}
	for (; i < str.size(); i++)
	{
		ch = str[i];
		if (ch < '0' || ch > '9')
			return 0;
		digit = ch - '0';
		if (result > (2147483647 - digit) / 10)
			return 0;
		result = result * 10 + digit;
	}
	return (sign * result);
}

void PhoneBook::add_contact(int *i)
{
	if ((*i) == MAX_CONTACTS)
		(*i) = 0;
	// found segfault - adding second round contacts from 0 index;
	while (1)
	{
		if (std::cin.eof())
			return ;
		this->contacts[(*i)].set_first_name(edit_get_inp("Enter first name: "));
		if (this->contacts[(*i)].get_first_name().length() < 1)
			continue ;
		if (ft_isalpha(this->contacts[(*i)].get_first_name()))
			std::cout << "\033[1;31mError: Name cannot contain non-alphabetical characters!\033[0m" << std::endl;
		else
			break ;
	}
	while (1)
	{
		if (std::cin.eof())
			return ;
		this->contacts[(*i)].set_last_name(edit_get_inp("Enter last name: "));
		if (this->contacts[(*i)].get_last_name().length() < 1)
			continue ;
		if (ft_isalpha(this->contacts[(*i)].get_last_name()))
			std::cout << "\033[1;31mError: Last name cannot contain non-alphabetical characters!\033[0m" << std::endl;
		else
			break ;
	}
	while(1)
	{
		if (std::cin.eof())
			return ;
		this->contacts[(*i)].set_nickname(edit_get_inp("Enter nickname: "));
		if (this->contacts[(*i)].get_nickname().length() < 1)
			continue ;
		else
			break ;
	}
	while (1)
	{
		if (std::cin.eof())
			return ;
		this->contacts[(*i)].set_phone_number(edit_get_inp("Enter phone number: "));
		if (this->contacts[(*i)].get_phone_number().length() < 1)
			continue;
		if (ft_isdigit(this->contacts[(*i)].get_phone_number()) == 1)
			std::cout << "\033[1;31mError: Phone number cannot contain non-numeric characters!\033[0m" << std::endl;	
		else
			break ;
	}
	while(1)
	{
		if (std::cin.eof())
			return ;
		this->contacts[(*i)].set_darkest_secret(edit_get_inp("Enter darkest secret: "));
		if (this->contacts[(*i)].get_darkest_secret().length() < 1)
			continue ;
		else
			break ;
	}
	this->contacts[(*i)].set_index((*i));
	if (this->contacts_amount < MAX_CONTACTS)
		this->contacts_amount += 1;
	(*i)++;
	std::cout << "\033[1;32mContact added successfully\033[0m" << std::endl;
}


void	PhoneBook::print_contact(int i)
{
	std::cout << "index: " << i + 1 << std::endl;
	std::cout << "First name: " << this->contacts[i].get_first_name() << std::endl;
	std::cout << "Last name: " << this->contacts[i].get_last_name() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].get_nickname() << std::endl;
	std::cout << "Phone: " << this->contacts[i].get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[i].get_darkest_secret() << std::endl;
}
int PhoneBook::search_print_contact(std::string i_to_search)
{
	int index;
	int count;

	count = this->get_amount();
	if (count == 0)
	{
		std::cout << "\033[1;31mError: No contacts to display!\033[0m" << std::endl;
		return(1) ;
	}
	if (ft_isdigit(i_to_search) == 1)
	{
		std::cout << "\033[1;31mError: Invalid index!\033[0m" << std::endl;
		return(1) ;
	}
	if (i_to_search.empty())
		return (0);
	try {
		index = my_stoi(i_to_search);
	} catch (...) {
		std::cout << "Error: Invalid index." << std::endl;
		return(1) ;
	}
	if (index > 8 || index > count || index < 1)
	{
		std::cout << "\033[1;31mError: Out of range.\033[0m" << std::endl;
		return(1) ;
	}
	if (this->contacts[index - 1].get_first_name().size())
	{
		this->print_contact((index - 1));
		return (0);
	}
	return (1);
}
