#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(int *index); // change here
		void search_print_contact(std::string i);
		int get_amount();
		// std::string get_cmd(std::string str);
	private:
		int contacts_amount;
		Contact contacts[8];
};

#endif