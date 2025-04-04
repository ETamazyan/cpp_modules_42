#include <iostream>
#include <string>

// int main()
// {
// 	std::string str = "HI THIS IS BRAIN";
// 	std::string *stringPTR = &str;
// 	std::string &stringREF = str;

// 	(void)stringPTR;
// 	(void)stringREF;
// 	return (0);
// }


//check this reaaaaaaad
int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

    std::cout << "Addresses:" << std::endl;
    std::cout << &str << std::endl;  // Address of 'str'
    std::cout << stringPTR << std::endl;  // Address stored in 'stringPTR' (which is the address of 'str')
    std::cout << &stringREF << std::endl;  // Address of 'stringREF' (which is the address of 'str')
    
    std::cout << "Values:" << std::endl;
    std::cout << str << std::endl;  // Value of 'str' (which is "HI THIS IS BRAIN")
    std::cout << *stringPTR << std::endl;  // Dereferencing 'stringPTR' gives the value of 'str' (i.e., "HI THIS IS BRAIN")
    std::cout << stringREF << std::endl;  // Value of 'stringREF' (which is the value of 'str' as it refers to it)

	(void)stringPTR;
	(void)stringREF;
}