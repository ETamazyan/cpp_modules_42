#pragma once
#include <iostream>
#include <string>

template <typename T>
void swap(T &a, T &b) 
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T> // ⬇️ T alone would make a copy of the argument. But for big objects (like std::string, std::vector, or custom classes), copying can be expensive.
T min(T const &a, T const &b) 
{
	return (a < b ? a : b);
}

template <typename T>
T max(T const &a, T const &b) 
{
	return (a > b ? a : b);
}
