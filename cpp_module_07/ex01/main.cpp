#include "iter.hpp"
#include <iostream>
#include <string>

template <typename T>
void print(const T& x) { std::cout << x << ' '; }

void increment(int& x) { x += 1; }

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

int main()
{
    int numbers[] = {0, 1, 2, 3, 4};
    ::iter(numbers, 5, print<int>);
    std::cout << "\nIncrementing...\n";
    ::iter(numbers, 5, increment);
    ::iter(numbers, 5, print<int>);
    std::cout << std::endl;

    const std::string words[] = {"hello", "from", "iter"};
    ::iter(words, 3, print<std::string>);
    std::cout << std::endl;

    Awesome arr[5];
    ::iter(arr, 5, print<Awesome>);
    std::cout << std::endl;
}
