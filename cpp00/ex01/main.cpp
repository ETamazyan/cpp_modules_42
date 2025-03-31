#include "PhoneBook.hpp"
#include "Contact.hpp"

int	ft_isalpha(std::string chr)
{
	for (int i = 0; chr[i]; i++)
	{
		if (!isalpha(chr[i]))
			return (1);
	}
	return (0);
}

int	ft_isdigit(const std::string num)
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
		// uxxel funkcianerum te vorteghic ev inch erroi depqum petq a return ani ev ga while-i skizb, isk myus depqerum ughaki output-i noric tpi
		// error-y phone number-i demqum, noric phone_numbre ptq a beri voch te return ani,
		// search-y done 
		if (std::cin.eof())
			return (0);
		cmd = edit_get_inp("Enter command: ADD | SEARCH | EXIT\n");
		if (cmd == "ADD")
			phonebook.add_contact(&index);
		if (cmd == "SEARCH")
		{
			phonebook.displayContacts();
			std::cout<<"fghfhg\n";
			while (phonebook.search_print_contact(edit_get_inp("Enter an index\n")) == 1)
			{
				if (std::cin.eof())
					return (0);
				continue;
			}
		}
		if (cmd == "EXIT")
		{
			std::cout << "Exit" << std::endl;
			break ;
		}
	}
	return (0);
}
