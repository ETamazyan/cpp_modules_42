#include "Serializer.hpp"
#include <iostream>

int main()
{
    Data meta;
    meta.i = 42;
    meta.c = 'A';

    // ptr to an int
	std::cout << "serialized: " << &meta << std::endl;
    size_t raw = Serializer::serialize(&meta);

    // Deserialize back to a pointer
	std::cout << "deserialized: " << raw << std::endl;
    Data* ptr = Serializer::deserialize(raw);

    // Check ptrs
    if (ptr == &meta)
        std::cout << "Serialization and deserialization successful!" << std::endl;
    else
        std::cout << "Something went wrong!" << std::endl;

    std::cout << "Data.i = " << ptr->i << ", Data.c = " << ptr->c << std::endl;
    return 0;
}
