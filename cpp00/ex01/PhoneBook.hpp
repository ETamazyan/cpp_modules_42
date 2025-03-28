#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(int *index, int time); // change here
		// void search_contact(void *inf);
		// int get_amount();
		// std::string get_cmd(std::string str);
	private:
		int contacts_amount;
		Contact contacts[8];
};

#endif