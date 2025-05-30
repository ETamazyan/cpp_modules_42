#pragma once
#include <iostream>

template <class T>
void iter(T *array, size_t size, void (*f)(T const &))
{
	for (size_t i = 0; i < size; i++)
	{
		f(array[i]);
	}
}