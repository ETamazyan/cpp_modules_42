#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error: could not open file." << std::endl;
        return 1;
    }

    try {
        BitcoinExchange btc(argv[1]);
        btc.exchange();
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}




// // Your program must respect these rules:
// // • The program name is btc.
// // • Your program must take a file as an argument.
// // • Each line in this file must use the following format: "date | value".
// // • A valid date will always be in the following format: Year-Month-Day.
// // • A valid value must be either a float or a positive integer, between 0 and 1000.

// // $> ./btc
// // Error: could not open file.
// // $> ./btc input.txt
// // 2011-01-03 => 3 = 0.9
// // 2011-01-03 => 2 = 0.6
// // 2011-01-03 => 1 = 0.3
// // 2011-01-03 => 1.2 = 0.36
// // 2011-01-09 => 1 = 0.32
// // Error: not a positive number.
// // Error: bad input => 2001-42-42
// // 2012-01-11 => 1 = 7.1
// // Error: too large a number.
// // $>
