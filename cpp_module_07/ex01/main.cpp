#include "iter.hpp"

template <typename T>
void print(T const &i)
{
	std::cout << i << std::endl;
}


int main()
{
	// {
	// 	int intArray[] = {1, 2, 3, 42, 5};
	// 	iter(intArray, 5, print);
	// }
	// {
	// 	std::string stringArray[] = {"Hello", "World", "!"};
	// 	iter(stringArray, 3, print);
	// }
	{
		float intArray[] = {1.0005, 2.890005, 3.8932475};
		iter(intArray, 3, print);
	}
	return 0;
}
