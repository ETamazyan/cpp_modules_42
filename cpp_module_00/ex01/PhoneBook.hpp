#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

#define MAX_CONTACTS 8

class PhoneBook
{
public:
	PhoneBook();
	~PhoneBook();
	int getAmount();
	void printContact(int i);
	void addContact(int *index); // change here
	int searchPrintContact(std::string i);
	// std::string get_cmd(std::string str);
	void displayContacts();
	// std::string formatColumn(const std::string &text);
private:
	int contacts_amount;
	Contact contacts[MAX_CONTACTS];
};

#endif