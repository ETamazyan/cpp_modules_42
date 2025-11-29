// WARNING
#include "PmergeMe.hpp"
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <sys/time.h>
#include <algorithm>
#include <limits>

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

// Parse args: argv[1..] must be positive integers (no leading '+' or '-')
// Return false and print "Error" to stderr if invalid.
bool PmergeMe::parseArgs(int argc, char **argv, std::vector<int> &out) {
    if (argc < 2)
        return false;
    for (int i = 1; i < argc; ++i) {
        std::string s(argv[i]);
        if (!isPositiveIntegerString(s)) {
            std::cerr << "Error" << std::endl;
            return false;
        }
        // use strtoul to check overflow
        const char *cstr = s.c_str();
        unsigned long val = std::strtoul(cstr, NULL, 10);
        if (val == 0 || val > (unsigned long)std::numeric_limits<int>::max()) {
            std::cerr << "Error" << std::endl;
            return false;
        }
        out.push_back((int)val);
    }
    return true;
}

bool PmergeMe::isPositiveIntegerString(const std::string &s) {
    if (s.empty())
        return false;
    for (size_t i = 0; i < s.size(); ++i) {
        if (!std::isdigit(static_cast<unsigned char>(s[i])))
            return false;
    }
    return true;
}

// Split into pairs for vector version
void PmergeMe::splitPairsVector(const std::vector<int> &input,
                                std::vector<int> &mainChain,
                                std::vector<int> &pend) {
    mainChain.clear();
    pend.clear();
    size_t n = input.size();
    for (size_t i = 0; i + 1 < n; i += 2) {
        int a = input[i];
        int b = input[i+1];
        if (a > b) {
            mainChain.push_back(a);
            pend.push_back(b);
        } else {
            mainChain.push_back(b);
            pend.push_back(a);
        }
    }
    if (n % 2 == 1) {
        pend.push_back(input[n-1]);
    }
}

// Same for deque
void PmergeMe::splitPairsDeque(const std::deque<int> &input,
                               std::deque<int> &mainChain,
                               std::deque<int> &pend) {
    mainChain.clear();
    pend.clear();
    size_t n = input.size();
    for (size_t i = 0; i + 1 < n; i += 2) {
        int a = input[i];
        int b = input[i+1];
        if (a > b) {
            mainChain.push_back(a);
            pend.push_back(b);
        } else {
            mainChain.push_back(b);
            pend.push_back(a);
        }
    }
    if (n % 2 == 1) {
        pend.push_back(input[n-1]);
    }
}

void PmergeMe::binaryInsertVector(std::vector<int> &sorted, int value) {
    std::vector<int>::iterator it = std::lower_bound(sorted.begin(), sorted.end(), value);
    sorted.insert(it, value);
}

void PmergeMe::binaryInsertDeque(std::deque<int> &sorted, int value) {
    // deques do not have random access insert performance as vectors but for our
    // problem size it is acceptable. Use manual binary search on indices.
    if (sorted.empty()) {
        sorted.push_back(value);
        return;
    }
    size_t lo = 0, hi = sorted.size();
    while (lo < hi) {
        size_t mid = (lo + hi) / 2;
        if (sorted[mid] < value)
            lo = mid + 1;
        else
            hi = mid;
    }
    sorted.insert(sorted.begin() + lo, value);
}

// Generate insertion order for pend elements up to m using Jacobsthal-like sequence
// We produce a sequence of unique indices in range [0..m-1] that starts with 0, then
// proceeds using Jacobsthal numbers where possible, then fills remaining indices in increasing order.
// This is a reasonable ordering for Ford-Johnson-style insertion.
void PmergeMe::jacobsthalOrder(int m, std::vector<int> &order) {
    order.clear();
    if (m <= 0) return;
    std::vector<int> used(m, 0);

    // Jacobsthal numbers: J0=0, J1=1, Jn = J(n-1) + 2*J(n-2)
    std::vector<int> J;
    J.push_back(0);
    if (m > 1) J.push_back(1);
    while (true) {
        size_t sz = J.size();
        if (sz < 2) break;
        long next = (long)J[sz-1] + 2L * (long)J[sz-2];
        if (next >= m) break;
        J.push_back((int)next);
    }

    // insert J sequence (skip 0 because it's index 0, but we want index 0 first)
    for (size_t i = 0; i < J.size(); ++i) {
        int idx = J[i];
        if (idx >= 0 && idx < m && !used[idx]) {
            order.push_back(idx);
            used[idx] = 1;
        }
    }
    // make sure 0 is first if not already
    if (!order.empty() && order[0] != 0) {
        // ensure 0 is present
        if (!used[0]) {
            order.insert(order.begin(), 0);
            used[0] = 1;
        } else {
            // move existing 0 to front
            for (size_t i = 0; i < order.size(); ++i) {
                if (order[i] == 0) {
                    order.erase(order.begin() + i);
                    order.insert(order.begin(), 0);
                    break;
                }
            }
        }
    } else if (order.empty()) {
        order.push_back(0);
        used[0] = 1;
    }

    // append remaining indices in increasing order
    for (int i = 0; i < m; ++i) {
        if (!used[i]) {
            order.push_back(i);
            used[i] = 1;
        }
    }
}

// Recursive merge-insert for vector
std::vector<int> PmergeMe::sortVector(const std::vector<int> &input) {
    size_t n = input.size();
    if (n <= 1) return input;

    std::vector<int> mainChain;
    std::vector<int> pend;
    splitPairsVector(input, mainChain, pend);

    // recursively sort the mainChain
    std::vector<int> sortedMain = sortVector(mainChain);

    // insertion order for pend
    std::vector<int> order;
    jacobsthalOrder((int)pend.size(), order);

    // insert pend elements in order into sortedMain
    for (size_t k = 0; k < order.size(); ++k) {
        int idx = order[k];
        if (idx < 0 || (size_t)idx >= pend.size()) continue;
        int val = pend[idx];
        binaryInsertVector(sortedMain, val);
    }
    return sortedMain;
}

// Recursive merge-insert for deque
std::deque<int> PmergeMe::sortDeque(const std::deque<int> &input) {
    size_t n = input.size();
    if (n <= 1) {
        std::deque<int> r(input);
        return r;
    }

    std::deque<int> mainChain;
    std::deque<int> pend;
    splitPairsDeque(input, mainChain, pend);

    // recursively sort the mainChain (convert to deque)
    std::deque<int> sortedMain = sortDeque(mainChain);

    // prepare order vector (use same jacobsthal helper)
    std::vector<int> order;
    jacobsthalOrder((int)pend.size(), order);

    // insert pend elements
    for (size_t k = 0; k < order.size(); ++k) {
        int idx = order[k];
        if (idx < 0 || (size_t)idx >= pend.size()) continue;
        int val = pend[idx];
        binaryInsertDeque(sortedMain, val);
    }
    return sortedMain;
}
