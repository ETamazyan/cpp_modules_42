#include "Harl.hpp"
#include <cstdlib> // exit

void Harl::complain(std::string level)
{
	void (Harl::*complaints_ptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; ++i)
	{
		if (level == arr_levels[i])
		{
			break;
		}
	}
	switch (i)
	{
	case 0:
		(this->*complaints_ptr[0])();
		std::cout << std::endl;
		// intentional fallthrough
	case 1:
		(this->*complaints_ptr[1])();
		std::cout << std::endl;
		// intentional fallthrough
	case 2:
		(this->*complaints_ptr[2])();
		std::cout << std::endl;
		// intentional fallthrough
	case 3:
		(this->*complaints_ptr[3])();
		std::cout << std::endl;
		break;
	default:
		std::cout << "Are you even trying? Because this is not working!" << std::endl;
		exit(1);
	}
}

void Harl::debug(void)
{
	std::cout << "DEBUG" << std::endl;
	std::cout << "The system has successfully loaded the user data, but I will need to check for additional parameters." << std::endl;
}

void Harl::info(void)
{
	std::cout << "INFO" << std::endl;
	std::cout << "The new feature has been activated, and everything is functioning as expected, but I am keeping an eye out for any anomalies." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "WARNING" << std::endl;
	std::cout << "The process is running slower than expected, but it is still within acceptable limits." << std::endl;
}

void Harl::error(void)
{
	std::cout << "ERROR" << std::endl;
	std::cout << "The application has crashed unexpectedly. Immediate resolution is needed to restore service." << std::endl;
}