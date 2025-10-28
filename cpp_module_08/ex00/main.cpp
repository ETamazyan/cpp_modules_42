#include "easyfind.hpp"
#include <vector>
#include <list>
#include <deque>

int main()
{
    try {
        std::vector<int> vec;
        for (int i = 0; i < 5; ++i)
            vec.push_back(i * 10);

        std::cout << "Vector: ";
        for (size_t i = 0; i < vec.size(); ++i)
            std::cout << vec[i] << ' ';
        std::cout << std::endl;

        std::vector<int>::iterator it = easyfind(vec, 20);

        it = easyfind(vec, 99); // should throw
    } catch (const std::exception &e) {
        // std::cerr << "Exception: " << e.what() << std::endl;
		std::cerr << "\033[31mException: " << e.what() << "\033[0m" << std::endl;
    }

    // You can test with other containers too:
    std::list<int> lst;
    lst.push_back(42);
    lst.push_back(99);

    try {
        std::list<int>::iterator it2 = easyfind(lst, 99);
		(void)*it2;
    } catch (const std::exception &e) {
        std::cerr << "List exception: " << e.what() << std::endl;
    }

    return 0;
}
