#include "Harl.hpp"

void Harl::complain(std::string level)
{
	void (Harl::*complaints_ptr[4])(void) =  {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string arr_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int i;
	for (i = 0; i < 4; ++i)
	{
		if (level == arr_levels[i])
		{
			std::cout << level << std::endl; // keeeeeeeeeeeeeeep thiiiiiiiiiiiiiiiis
			(this->*complaints_ptr[i])();
			return ;
		}
		i++;
	}
	std::cout << "ERROR: Are you even trying? Because this is not working!" << std::endl; 
}

void Harl::debug(void)
{
	std::cout << "The system has successfully loaded the user data, but I will need to check for additional parameters." << std::endl;
}

void Harl::info(void)
{
	std::cout << "The new feature has been activated, and everything is functioning as expected, but I am keeping an eye out for any anomalies." << std::endl;
}

void Harl::warning(void)
{
	std::cout << "The process is running slower than expected, but it is still within acceptable limits." << std::endl;
}

void Harl::error(void)
{
	std::cout << "The application has crashed unexpectedly. Immediate resolution is needed to restore service." << std::endl;
}