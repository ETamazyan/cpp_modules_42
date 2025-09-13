#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{}

template <typename T>
Array<T>::Array(unsigned int n) : _array(NULL), _size(0)
{
	this->_array = new (std::nothrow) T[n];

	if (!this->_array)
	{
		std::cout << "Allocation failed" << std::endl;
	}
	else
	{
		_size = n;
	}
}

template <typename T>
Array<T>::Array(const Array &rhs) : _array(NULL), _size(0)
{
	this->_array = new (std::nothrow) T[rhs._size];
	if (!this->_array)
	{
		std::cout << "Allocation failed" << std::endl;
	}
	else
	{
		for (unsigned int i = 0; i < rhs._size; i++)
		{
			this->_array[i] = rhs._array[i];
		}
		this->_size = rhs._size;
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &rhs)
{
	T *temp;

	if (this == &rhs)
		return (*this);

	temp = new (std::nothrow) T[rhs._size];

	if (!temp)
	{
		std::cout << "Allocation failed" << std::endl;
	}
	else
	{
		delete this->_array;
		this->_array = temp;
		this->_size = rhs._size;
		for (unsigned int i = 0; i < rhs._size; i++)
		{
			this->_array[i] = rhs._array[i];
		}
	}
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
	if (i < _size)
	{
		return (_array[i]);
	}
	throw std::exception();
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
}