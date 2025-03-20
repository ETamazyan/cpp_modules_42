#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class	PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact(std::string f_name, std::string l_name, std::string nickname, std::string phone_nbr, std::string secret);
		void search_contact(void *inf);
		int get_amount();
		// std::string get_cmd(std::string str);
	private:
		int contacts_amount;
		Contact contacts[8];
};

#endif