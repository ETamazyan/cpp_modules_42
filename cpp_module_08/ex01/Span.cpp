#include "Span.hpp"

Span::Span(unsigned int N) : _maxSize(N) {}

Span::Span(const Span &other) : _maxSize(other._maxSize), _numbers(other._numbers) {}

Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        _maxSize = other._maxSize;
        _numbers = other._numbers;
    }
    return *this;
}

Span::~Span() {}

void Span::addNumber(int num)
{
    if (_numbers.size() >= _maxSize)
        throw std::out_of_range("Span is already full");
    _numbers.push_back(num);
}

int Span::shortestSpan() const
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    std::vector<int> sorted = _numbers;
    std::sort(sorted.begin(), sorted.end());

    int shortest = std::numeric_limits<int>::max();
    for (size_t i = 0; i < sorted.size() - 1; ++i)
    {
        int diff = sorted[i + 1] - sorted[i];
        if (diff < shortest)
            shortest = diff;
    }
    return shortest;
}

int Span::longestSpan() const
{
    if (_numbers.size() < 2)
        throw std::logic_error("Not enough numbers to find a span");

    int minVal = *std::min_element(_numbers.begin(), _numbers.end());
    int maxVal = *std::max_element(_numbers.begin(), _numbers.end());
    return maxVal - minVal;
}

void Span::print() const
{
    std::cout << "Span contains: ";
    for (size_t i = 0; i < _numbers.size(); ++i)
        std::cout << _numbers[i] << " ";
    std::cout << std::endl;
}
