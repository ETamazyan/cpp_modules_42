#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		void complain( std::string level);
	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
};

#endif















// void Harl::complain(std::string level)
// {
// 	void (Harl::*complaints_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
// 	std::string arr_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

// 	int i;
// 	for (i = 0; i < 4; ++i)
// 	{
// 		if (level == arr_levels[i])
// 		{
// 			std::cout << level << std::endl;
// 			break;
// 		}
// 	}

// 	switch (i)
// 	{
// 	case 0:
// 		(this->*complaints_ptr[0])();
// 		std::cout << "a" << std::endl;
// 	case 1:
// 		(this->*complaints_ptr[1])();
// 		std::cout << "a" << std::endl;
// 	case 2:
// 		(this->*complaints_ptr[2])();
// 		std::cout << "a" << std::endl;
// 	case 3:
// 		(this->*complaints_ptr[3])();
// 		std::cout << "a" << std::endl;
// 		break;
// 	default:
// 		std::cout << "Are you even trying? Because this is not working!" << std::endl;
// 		exit(1);
// 	}
// 	// void (Harl::*complaints_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
// 	// std::string arr_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

// 	// int i;
// 	// for (i = 0; i < 4; ++i)
// 	// {
// 	// 	if (level == arr_levels[i])
// 	// 	{
// 	// 		std::cout << level << std::endl; // keeeeeeeeeeeeeeep thiiiiiiiiiiiiiiiis
// 	// 		break;
// 	// 	}
// 	// 	i++;
// 	// }
// 	// switch (i)
// 	// {
// 	// case 0:
// 	// 	(this->*func_ptr[0])();
// 	// 	std::cout << std::endl;
// 	// case 1:
// 	// 	(this->*func_ptr[1])();
// 	// 	std::cout << std::endl;
// 	// case 2:
// 	// 	(this->*func_ptr[2])();
// 	// 	std::cout << std::endl;
// 	// case 3:
// 	// 	(this->*func_ptr[3])();
// 	// 	std::cout << std::endl;
// 	// 	break;
// 	// default:
// 	// 	std::cout << "Are you even trying? Because this is not working!" << std::endl;
// 	// 	exit(1);
// 	// }
// }
