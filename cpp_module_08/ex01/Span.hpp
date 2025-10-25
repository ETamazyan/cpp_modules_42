#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>
#include <limits>

class Span
{
private:
    unsigned int _maxSize;
    std::vector<int> _numbers;

public:
    Span(unsigned int N);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    void addNumber(int num);

    template <typename InputIterator>
    void addRange(InputIterator begin, InputIterator end)
    {
        if (_numbers.size() + std::distance(begin, end) > _maxSize)
            throw std::out_of_range("Not enough space to add the range");
        _numbers.insert(_numbers.end(), begin, end);
    }

    int shortestSpan() const;
    int longestSpan() const;

    void print() const;
};
