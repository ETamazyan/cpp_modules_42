#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

std::string edit_get_inp(std::string str);
int ft_isalpha(std::string chr);
int ft_isdigit(const std::string num);

class Contact
{
public:
	Contact();
	~Contact();
	void set_index(int index);
	void setFirstName(std::string first_name);
	void setLastName(std::string last_name);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phone_number);
	void setDarkestSecret(std::string darkest_secret);
	int get_index();
	std::string get_first_name();
	std::string get_last_name();
	std::string get_nickname();
	std::string get_phone_number();
	std::string get_darkest_secret();
	// void sov(){this->porc(*this);}
	
	private:
	int index;
	// static void porc(Contact obj){std::cout << "exa\n"; obj.index=5;}
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;
};

#endif