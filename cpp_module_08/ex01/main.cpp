#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        sp.print();

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        // ---- Testing range insertion ----
        std::vector<int> v;
        for (int i = 0; i < 10000; ++i)
            v.push_back(i);
        Span big(10000);
        big.addRange(v.begin(), v.end());
        std::cout << "Big Span shortest: " << big.shortestSpan() << std::endl;
        std::cout << "Big Span longest: " << big.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
// ********************** alternative main.cpp



// version 2 **********************

// #include "Span.hpp"

// int main()
// {
// 	Span sp = Span(5);
// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);
// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;
// 	return 0;
// }


// // the output should be:
// // $> ./ex01
// // 2
// // 14
// // $>