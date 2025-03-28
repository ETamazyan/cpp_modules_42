#include "PhoneBook.hpp"
#include "Contact.hpp"
// #include <cstring>
// #include <string>
#include <cstdio>

// cut below
#include <iostream>
#include <ctime>
#include <sstream>

long long getLocalTime() {
	std::time_t now = std::time(NULL);
	struct tm localTime = *std::localtime(&now);
	long long time = (localTime.tm_hour * 10000LL) + (localTime.tm_min * 100LL) + localTime.tm_sec;
	return time;
}
// cut above 

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
	long long time;

	time = getLocalTime();
	while (1)
	{
		std::cout << "while 1 = " << (getLocalTime() - time) <<std::endl;
		cmd = edit_get_inp("Enter command: ADD | SEARCH | EXIT\n");
		if (cmd == "ADD")
		{
			std::cout << "cmd == ADD = " << (getLocalTime() - time) <<std::endl;
			std::cout << cmd <<std::endl;
			phonebook.add_contact(&index, time);
			// break;
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
