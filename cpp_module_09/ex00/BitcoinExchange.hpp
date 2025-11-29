#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange {

public:
    BitcoinExchange();      
    BitcoinExchange(const std::string &inputFile);
    BitcoinExchange(const BitcoinExchange &other);
    BitcoinExchange &operator=(const BitcoinExchange &other);
    ~BitcoinExchange();

    void exchange();

private:
    std::string input;
    std::map<std::string, double> database;

    void loadDatabase(const std::string &csvFile);
    bool isValidDate(const std::string &date) const;
    bool isValidValue(const std::string &valueStr) const;
    std::string findClosestDate(const std::string &date) const;

	void trim(std::string &s) const;
};

#endif