#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

# define MAX_CONTACTS 2
class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		int get_amount();
		void print_contact(int i);
		void add_contact(int *index); // change here
		int search_print_contact(std::string i);
		// std::string get_cmd(std::string str);
		void 		displayContacts();
		// std::string formatColumn(const std::string &text);
		private:
		int contacts_amount;
		Contact contacts[MAX_CONTACTS];
};

#endif