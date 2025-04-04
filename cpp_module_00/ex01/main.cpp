#include "PhoneBook.hpp"
#include "Contact.hpp"

int ft_isalpha(std::string chr)
{
	for (int i = 0; chr[i]; i++)
	{
		if (!isalpha(chr[i]))
			return (1);
	}
	return (0);
}

int ft_isdigit(const std::string num)
{
	for (int i = 0; num[i]; i++)
	{
		if (!isdigit(num[i]))
			return (1);
	}
	return (0);
}

std::string edit_get_inp(std::string str)
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
	int index = 0;

	while (1)
	{
		if (std::cin.eof())
			return (0);
		cmd = edit_get_inp("Enter command: ADD | SEARCH | EXIT\n");
		if (cmd == "ADD")
			phonebook.addContact(&index);
		if (cmd == "SEARCH")
		{
			phonebook.displayContacts();
			while (phonebook.searchPrintContact(edit_get_inp("Please enter an index, or press Enter to go back.\n")) == 1)
			{
				if (std::cin.eof())
					return (0);
				continue;
			}
		}
		if (cmd == "EXIT")
		{
			std::cout << "Exit" << std::endl;
			break;
		}
	}
	// Contact ob;
	// ob.sov();
	return (0);
}
