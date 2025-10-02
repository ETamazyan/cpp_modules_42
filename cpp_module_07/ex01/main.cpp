
// #include <iostream>
// #include "iter.hpp"

// template <typename T>
// void print(const T &a)
// {
// 	std::cout << a << std::endl;
// }

// int main(void)
// {
// 	int array[] = {1, 2, 3, 4, 14, 6, 6, 6};
// 	std::cout << "Non-const array:" << std::endl;
// 	iter(array, 8, print);

// 	const int array2[] = {818, 244, 24, 68};
// 	std::cout << "\nConst array:" << std::endl;
// 	iter(array2, 4, print);

// 	return 0;
// }




// ********************************************** */

#include "iter.hpp" 

template <typename T>
void printInline(const T& x) { std::cout << x << ' '; }

template <typename T>
void printLn(const T& x) { std::cout << x << std::endl; }

void incrementInt(int & x) { x += 1; }

template <typename T>
void tplShow(const T& x) { std::cout << "tpl: " << x << std::endl; }

class Awesome {
public:
    Awesome(void) : _n(42) {}
    int get(void) const { return _n; }
private:
    int _n;
};
std::ostream& operator<<(std::ostream& os, const Awesome& a) {
    os << a.get();
    return os;
}

struct AddTen {
    void operator()(int & x) const { x += 10; }
};

int main()
{
    int numbers[] = {0, 1, 2, 3, 4};
    size_t n_len = sizeof(numbers) / sizeof(numbers[0]);

    std::cout << "Original ints: ";
    iter(numbers, n_len, printInline<int>);
    std::cout << std::endl;

    std::cout << "Incrementing ints by 1..." << std::endl;
    iter(numbers, n_len, incrementInt);
    std::cout << "After increment: ";
    iter(numbers, n_len, printInline<int>);
    std::cout << std::endl;

    std::cout << "Adding 10 using functor..." << std::endl;
    iter(numbers, n_len, AddTen());
    std::cout << "After AddTen: ";
    iter(numbers, n_len, printInline<int>);
    std::cout << std::endl;

    std::cout << "Using instantiated template printer:" << std::endl;
    iter(numbers, n_len, tplShow<int>);

    // --- const std::string array test ---
    const std::string words[] = {"hello", "from", "iter"};
    size_t w_len = sizeof(words) / sizeof(words[0]);

    std::cout << "Const strings:" << std::endl;
    iter(words, w_len, printLn<std::string>);

    // --- custom class test ---
    Awesome awesomes[5];
    size_t a_len = sizeof(awesomes) / sizeof(awesomes[0]);
    std::cout << "Awesome objects: ";
    iter(awesomes, a_len, printInline<Awesome>);
    std::cout << std::endl;

    // --- zero-length test ---
    std::cout << "Zero-length test (should print nothing):";
    iter(numbers, 0, printInline<int>);
    std::cout << std::endl;

    return 0;
}
