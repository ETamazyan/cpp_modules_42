#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <climits>
#include <cerrno>
#include <stdint.h>

class ScalarConverter
{
private:
	ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter &operator=(const ScalarConverter &rhs);
	virtual ~ScalarConverter();

public:
	static void convert(const std::string &literal);
};

int validation(const std::string &av);

#endif