#include "PhoneBook.hpp"
#include "Contact.hpp"
// #include <cstring>
// #include <string>

static std::string edit_get_inp(std::string str)
{
	std::string cmd;
	std::cout << str;
	std::getline(std::cin, cmd);
	return (cmd);
}

int main()
{
	PhoneBook phonebook;
	std::string cmd;

	while (1)
	{
		cmd = edit_get_inp("Enter command: ADD | SEARCH | EXIT\n");
		if (cmd == "ADD")
		{
			std::cout << cmd <<std::endl;
			break;
		}
		if (cmd == "SEARCH")
		{
			std::cout << cmd <<std::endl;
			break;
		}
		if (cmd == "EXIT")
		{
			std::cout << "Exit" << std::endl;
			break ;
		}
	}
	return (0);
}