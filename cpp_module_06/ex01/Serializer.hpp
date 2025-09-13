#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>

struct Data
{
	int i;
	char c;
};

class Serializer
{
public:
	static uintptr_t serialize(Data *ptr);
	static Data *deserialize(uintptr_t raw);

private:
	Serializer();
	Serializer(const Serializer &rhs);
	Serializer &operator=(const Serializer &rhs);
	virtual ~Serializer();
};

#endif