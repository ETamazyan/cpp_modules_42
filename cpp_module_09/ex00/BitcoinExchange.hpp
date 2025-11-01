#pragma once

#include <map>
#include <string>

class BitcoinExchange {
   public:
	BitcoinExchange();
	~BitcoinExchange();
	void loadData(const std::string& filename);
	double getExchangeRate(const std::string& date) const;

   private:
	std::map<std::string, double> exchangeRates;
};