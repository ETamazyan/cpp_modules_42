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


// #pragma once

// #include <map>
// #include <string>

// class BitcoinExchange {
//    public:
// 	BitcoinExchange();
// 	BitcoinExchange(const BitcoinExchange &other); // copy ctor
// 	BitcoinExchange(const std::string &csvFile); // BitcoinExchange btc("data.csv");
// 	BitcoinExchange &operator=(const BitcoinExchange &other);
// 	~BitcoinExchange();

// 	// void loadData(const std::string& filename);
// 	// double getExchangeRate(const std::string& date) const;

//    private:
// 	std::map<std::string, double> exchangeRates;
// };