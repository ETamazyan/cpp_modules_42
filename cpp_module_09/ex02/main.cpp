#include "PmergeMe.hpp"


static double timevalToMicro(const struct timeval &a, const struct timeval &b) {
    double sec = (double)(b.tv_sec - a.tv_sec);
    double usec = (double)(b.tv_usec - a.tv_usec);
    return sec * 1000000.0 + usec;
}

int main(int argc, char **argv) {
    std::vector<int> input;
    if (!PmergeMe::parseArgs(argc, argv, input)) {
        // parseArgs prints "Error" on stderr already for invalid input
        return 1;
    }

    // Print Before line
    std::cout << "Before: ";
    for (size_t i = 0; i < input.size(); ++i) {
        if (i) std::cout << " ";
        std::cout << input[i];
    }
    std::cout << std::endl;

    // Prepare for vector sort
    struct timeval t0, t1;
    gettimeofday(&t0, NULL);
    std::vector<int> vecSorted = PmergeMe::sortVector(input);
    gettimeofday(&t1, NULL);
    double timeVecUs = timevalToMicro(t0, t1);

    // Prepare for deque sort (convert)
    std::deque<int> dq(input.begin(), input.end());
    struct timeval t2, t3;
    gettimeofday(&t2, NULL);
    std::deque<int> dqSorted = PmergeMe::sortDeque(dq);
    gettimeofday(&t3, NULL);
    double timeDequeUs = timevalToMicro(t2, t3);

    // Print After (use vector result for unified print)
    std::cout << "After: ";
    for (size_t i = 0; i < vecSorted.size(); ++i) {
        if (i) std::cout << " ";
        std::cout << vecSorted[i];
    }
    std::cout << std::endl;

    // Print times with reasonable precision
    std::cout << "Time to process a range of " << input.size()
              << " elements with std::vector : " << std::fixed << std::setprecision(5)
              << timeVecUs << " us" << std::endl;

    std::cout << "Time to process a range of " << input.size()
              << " elements with std::deque  : " << std::fixed << std::setprecision(5)
              << timeDequeUs << " us" << std::endl;

    return 0;
}
