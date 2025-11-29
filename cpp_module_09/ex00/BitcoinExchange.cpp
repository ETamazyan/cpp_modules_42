#include "BitcoinExchange.hpp"
#include <cstdlib>

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const std::string &inputFile)
{
    this->input = inputFile;
    loadDatabase("data.csv");
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other)
{
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        this->input = other.input;
        this->database = other.database;
    }
    return (*this);
}

BitcoinExchange::~BitcoinExchange() {}



void BitcoinExchange::loadDatabase(const std::string &csvFile) {
    std::ifstream file(csvFile.c_str());
    if (!file.is_open()) {
        std::cerr << "Error: could not open file: " << csvFile << std::endl;
        std::exit(1);
    }

    // skip header, check later if the program should work with this exact way
    std::string line;
    std::getline(file, line);

    while (std::getline(file, line)) {
        if (line.empty())
            continue;

        size_t delim = line.find(',');
        if (delim == std::string::npos)
            continue;

        std::string date = line.substr(0, delim);
        std::string price = line.substr(delim + 1);

        double rate = std::strtod(price.c_str(), NULL);
        this->database[date] = rate;
    }
}

bool BitcoinExchange::isValidDate(const std::string &date) const
{
    if (date.size() != 10 ||
        date[4] != '-' || date[7] != '-')
        return false;

    int year = std::atoi(date.substr(0,4).c_str());
    int month = std::atoi(date.substr(5,2).c_str());
    int day = std::atoi(date.substr(8,2).c_str());

    if (year < 2009) return false;
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > 31) return false;

    return true;
}



bool BitcoinExchange::isValidValue(const std::string &valueStr) const
{
    std::istringstream ss(valueStr);
    double v;

    ss >> v;
    if (ss.fail())
        return false;
    if (v < 0)
    {
        std::cout << "Error: not a positive number." << std::endl;
        return false;
    }
    if (v > 1000)
    {
        std::cout << "Error: too large a number." << std::endl;
        return false;
    }
    return true;
}


std::string BitcoinExchange::findClosestDate(const std::string &date) const {
    std::map<std::string, double>::const_iterator it = this->database.lower_bound(date);

    if (it == this->database.begin())
        return it->first;

    if (it == this->database.end() || it->first != date)
        --it;

    return it->first;
}

void BitcoinExchange::exchange() {
    std::ifstream infile(this->input.c_str());
    if (!infile.is_open()) {
        std::cerr << "Error: could not open file: " << this->input << std::endl;
        std::exit(1);
    }

    // for skipping the  header, check later if this is okay to be here
    std::string line;
    std::getline(infile, line);

    while (std::getline(infile, line)) {
        if (line.empty())
            continue;

        size_t pipe = line.find('|');
        if (pipe == std::string::npos) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        std::string date = line.substr(0, pipe);
        std::string value = line.substr(pipe + 1);

        trim(date);
        trim(value);

        if (!isValidDate(date)) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }

        if (!isValidValue(value)) {
            continue; 
        }

        double v = std::strtod(value.c_str(), NULL);

        // closest date
        std::string closest = findClosestDate(date);
        double rate = this->database.at(closest);

        double result = v * rate;

        std::cout << date << " => " << v << " = " << result << std::endl;
    }
}


void BitcoinExchange::trim(std::string &s) const
{
    while (!s.empty() && (s[0] == ' ' || s[0] == '\t'))
        s.erase(0, 1);
    while (!s.empty() && (s[s.length() - 1] == ' ' || s[s.length() - 1] == '\t'))
        s.erase(s.length() - 1, 1);
}
