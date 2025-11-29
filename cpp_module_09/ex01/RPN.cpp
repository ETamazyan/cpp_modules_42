#include "RPN.hpp"

RPN::RPN() : expr("") {}

RPN::RPN(const std::string &expression) : expr(expression) {}

RPN::RPN(const RPN &other) : expr(other.expr), st(other.st) {}

RPN &RPN::operator=(const RPN &other)
{
	if (this != &other)
	{
		this->expr = other.expr;
		this->st = other.st;
	}
	return *this;
}

RPN::~RPN() {}

bool RPN::isOperator(const std::string &token) const
{
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

bool RPN::isNumber(const std::string &token) const
{
	if (token.length() != 1)
		return false;
	return (token[0] >= '0' && token[0] <= '9');
}

void RPN::applyOperator(const std::string &op)
{
	if (st.size() < 2)
		throw std::runtime_error("Error");

	int b = st.top(); st.pop();
	int a = st.top(); st.pop();

	int result;

	if (op == "+")
		result = a + b;
	else if (op == "-")
		result = a - b;
	else if (op == "*")
		result = a * b;
	else if (op == "/")
	{
		if (b == 0)
			throw std::runtime_error("Error");
		result = a / b;
	}
	else
		throw std::runtime_error("Error");

	st.push(result);
}

void RPN::evaluate()
{
	std::istringstream ss(expr);
	std::string token;

	while (ss >> token)
	{
		if (isNumber(token))
		{
			int n = token[0] - '0';
			st.push(n);
		}
		else if (isOperator(token))
		{
			applyOperator(token);
		}
		else
		{
			throw std::runtime_error("Error");
		}
	}

	if (st.size() != 1)
		throw std::runtime_error("Error");

	std::cout << st.top() << std::endl;

}
