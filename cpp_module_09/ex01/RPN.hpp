#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <string>
#include <stack>
#include <sstream>
#include <cstdlib>

class RPN
{
public:
    RPN();
    RPN(const std::string &expression);
    RPN(const RPN &other);
    RPN &operator=(const RPN &other);
    ~RPN();

    void evaluate();

private:
    std::string expr;
    std::stack<int> st;

    bool isOperator(const std::string &token) const;
    bool isNumber(const std::string &token) const;
    void applyOperator(const std::string &op);
};

#endif
