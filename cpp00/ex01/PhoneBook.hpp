#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class   PhoneBook
{
    public:
        void add_contact(std::string f_name, std::string l_name, std::string nickname, std::string phone_nbr, std::string secret);
        void search_contact(void *inf);
        int get_amount();
    private:
        PhoneBook();
        ~PhoneBook();
        int contacts_amount;
        Contact contacts[8];
};

#endif