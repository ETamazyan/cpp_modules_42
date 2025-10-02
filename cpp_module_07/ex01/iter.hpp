// #pragma once
// #include <iostream>

// template <class T>
// void iter(T *array, size_t size, void (*f)(T const &))
// {
// 	for (size_t i = 0; i < size; i++)
// 	{
// 		f(array[i]);
// 	}
// }


// **********************************************

// iter.hpp
#pragma once

#ifndef ITER_HPP
#define ITER_HPP


#include <iostream>
#include <string>
#include <cstddef>  

template <typename T, typename F>
void iter(T* array, size_t length, F func)
{
    if (!array || length == 0)
        return;
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

// Overload for const arrays
template <typename T, typename F>
void iter(const T* array, size_t length, F func)
{
    if (!array || length == 0)
        return;
    for (size_t i = 0; i < length; ++i)
        func(array[i]);
}

#endif
