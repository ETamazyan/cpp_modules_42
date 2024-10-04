#include <iostream>

using namespace std;

void    to_upper_case(char *str)
{
    int i;

    i = 0;
    while(str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] -= 32;
            i++;
    }
}

int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int i;

    i = 0;
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
        while (argv[i])
        {
			to_upper_case(argv[i]);
			std::cout << argv[i];
			i++;
		}
		std::cout << endl;
	}    
    return (0);
}