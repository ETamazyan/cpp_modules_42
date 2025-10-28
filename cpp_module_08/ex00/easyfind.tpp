#include <algorithm>
#include <stdexcept>
#include <iostream>

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define CYAN    "\033[36m"

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
    {
        throw std::runtime_error("Value not found in container");
	}

	size_t index = std::distance(container.begin(), it);
	std::cout << GREEN << "Found value " << YELLOW << value << GREEN << " at index " << YELLOW << index << RESET << std::endl;

    return it;
}
