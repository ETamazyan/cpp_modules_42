// WARNING

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <deque>
#include <string>
#include <iostream>
#include <sstream>
#include <sys/time.h>
#include <iomanip>

class PmergeMe {
public:
    PmergeMe();
    ~PmergeMe();

    // Parse & validate argv into vector<int>
    static bool parseArgs(int argc, char **argv, std::vector<int> &out);

    // Implementations for vector and deque
    static std::vector<int> sortVector(const std::vector<int> &input);
    static std::deque<int>  sortDeque(const std::deque<int> &input);

private:
    // Helpers
    static void splitPairsVector(const std::vector<int> &input,
                                 std::vector<int> &mainChain,
                                 std::vector<int> &pend);
    static void splitPairsDeque(const std::deque<int> &input,
                                std::deque<int> &mainChain,
                                std::deque<int> &pend);

    // Binary insert helpers
    static void binaryInsertVector(std::vector<int> &sorted, int value);
    static void binaryInsertDeque(std::deque<int> &sorted, int value);

    // Jacobsthal-inspired order generator (returns insertion index order for pend elements)
    static void jacobsthalOrder(int m, std::vector<int> &order);

    // Utility
    static bool isPositiveIntegerString(const std::string &s);
};

#endif
