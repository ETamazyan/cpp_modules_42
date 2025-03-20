#include "Contact.hpp"


Contact::Contact()
{
}

Contact::~Contact()
{
}

std::string Contact::get_first_name()
{
	return (this->first_name);
}

std::string Contact::get_last_name()
{
	return (this->last_name);
}

std::string Contact::get_nickname()
{
	return (this->nickname);
}

std::string Contact::get_phone_number()
{
	return (this->phone_number);
}

std::string Contact::get_darkest_secret()
{
	return (this->darkest_secret);
}

// void Contact::set_first_name(std::string &word)
// {
// 	this->first_name = word;
// }
// void Contact::set_last_name(std::string &word)
// {
// 	this->last_name = word;
// }
// void Contact::set_nick_name(std::string &word)
// {
// 	this->nickname = word;
// }
// void Contact::set_phone_number(std::string &word)
// {
// 	this->phone_number = word;
// }
// void Contact::set_darkest_secret(std::string &word)
// {
// 	this->darkest_secret = word;
// }
