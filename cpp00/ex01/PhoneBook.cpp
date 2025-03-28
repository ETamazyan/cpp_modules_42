#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contacts_amount = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact(int *i)
{
	if ((*i) == 8)
		(*i) = 0;
	this->contacts[(*i)].set_index((*i));
	this->contacts[(*i)].set_first_name(edit_get_inp("Enter first name: "));
	this->contacts[(*i)].set_last_name(edit_get_inp("Enter last name: "));
	this->contacts[(*i)].set_nickname(edit_get_inp("Enter nickname: "));
	this->contacts[(*i)].set_phone_number(edit_get_inp("Enter phone number: "));
	this->contacts[(*i)].set_darkest_secret(edit_get_inp("Enter darkest secret: "));
	if (ft_isalpha(this->contacts[(*i)].get_first_name()) && ft_isalpha(this->contacts[(*i)].get_last_name()))
	{
		std::cout << "\033[1;31mError: Names cannot contain non-alphabetical characters!\033[0m" << std::endl;
		return ;	
	}
	if (ft_isdigit(this->contacts[(*i)].get_phone_number()) == 1)
	{
		std::cout << "\033[1;31mError: Phone number cannot contain non-numeric characters!\033[0m" << std::endl;
		return ;
	}
	this->contacts_amount += 1;
	(*i)++;
	std::cout << "\033[1;32mContact added successfully\033[0m" << std::endl;
}

int PhoneBook::get_amount()
{
	return (this->contacts_amount);
}
void PhoneBook::search_print_contact(std::string i_to_search)
{
	if (this->get_amount() == 0)
	{
		std::cout << "\033[1;31mYou don't have any contacts!!\033[0m" << std::endl;
		return ;
	}
	if (i_to_search != "")
		std::cout << "Invalid index!" << std::endl;
	// if (i_to_search > "8")
	// {
	// 	std::cout << "\033[1;31mThe " << i_to_search << "\033[1;31mth contact is not available. Please try a smaller number.\033[0m" << std::endl;
	// 	return ;
	// }
	if (i_to_search.length() == 1 && i_to_search[0] >= '1' && i_to_search[0] <= '8' && \
	this->contacts[i_to_search[0] - 1 - '0'].get_first_name().size())
	{
		std::cout << "SUCCESS" << std::endl;
		// this->print_contact(i_to_search[0] - 1 - '0');
		return ;
	}
}


// void	PhoneBook::print_contact(int i)
// {
// 	std::cout << "index: " << i + 1;
// 	std::cout << "first name: " << this->contacts[i].get_first_name() << std::endl;
// 	std::cout << "last name: " << this->contacts[i].get_last_name() << std::endl;
// 	std::cout << "nick name: " << this->contacts[i].get_nick_name() << std::endl;
// 	std::cout << "phone number: " << this->contacts[i].get_phone_number() << std::endl;
// 	std::cout << "darkest secret: " << this->contacts[i].get_darkest_secret() << std::endl;
// }