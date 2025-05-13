#include <iostream>

// using namespace std;
// using std;
void	to_upper_case(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
        i++;
	}
}

int main(int argc, char **argv)
{
	(void)argv;
	int i;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (argv[i])
		{
			to_upper_case(argv[i]);
			std::cout << argv[i] << std::endl;
			i++;
		}
		std::cout << std::endl;
	}
	return (0);
}