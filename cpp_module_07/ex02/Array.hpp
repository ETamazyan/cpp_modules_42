#pragma once

#include <iostream>

template <typename T>
class Array
{
private:
	T* m_array;
	unsigned int m_size;

public:
	Array() : m_array(NULL), m_size(0) {}

	Array(unsigned int n) : m_array(new T[n]), m_size(n) {}

	Array(const Array &other) : m_array(new T[other.m_size]), m_size(other.m_size) {
		for (unsigned int i = 0; i < m_size; i++)
			m_array[i] = other.m_array[i];
	}

	~Array() {
		delete[] m_array;
	}

	Array &operator=(const Array &other) {
		if (this != &other) {
			delete[] m_array;
			m_size = other.m_size;
			m_array = new T[m_size];
			for (unsigned int i = 0; i < m_size; i++)
			m_array[i] = other.m_array[i];
		}
		return *this;
	}
	
	T &operator[](unsigned int index){
		if (index >= m_size)
		throw OutOfLimits();
		return m_array[index];
	}
	
	unsigned int size() const { 
		return m_size;
	}

	struct OutOfLimits : public std::exception {
	public:
		virtual const char *what () const  throw() {
			return "Index OUT OF LIMITS";
		}
	};
};
