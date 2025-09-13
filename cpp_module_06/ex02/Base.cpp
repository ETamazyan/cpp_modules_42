#include "Base.hpp"

Base *Base::generate()
{
    std::srand(static_cast<unsigned int>(std::time(NULL)));
    int randomValue = std::rand() % 3;

    if (randomValue == 0)
    {
        return (new A());
    }
    else if (randomValue == 1)
    {
        return (new B());
    }
    else
    {
        return (new C());
    }
}

void Base::identify(Base *obj)
{
    if (dynamic_cast<A *>(obj))
    {
        std::cout << "is A" << std::endl;
    }
    else if (dynamic_cast<B *>(obj))
    {
        std::cout << "is B" << std::endl;
    }
    else if (dynamic_cast<C *>(obj))
    {
        std::cout << "is C" << std::endl;
    }
    else
    {
        std::cout << " unknown" << std::endl;
    }
}

void Base::identify(Base &obj)
{
    try
    {
        (void)dynamic_cast<A &>(obj);
        std::cout << "is A" << std::endl;
    }
    catch (std::bad_cast &)
    {
    }

    try
    {
        (void)dynamic_cast<B &>(obj);
        std::cout << "is B" << std::endl;
    }
    catch (std::bad_cast &)
    {
    }

    try
    {
        (void)dynamic_cast<C &>(obj);
        std::cout << "is C" << std::endl;
    }
    catch (std::bad_cast &)
    {
    }
}

Base::~Base()
{
    std::cout << "Base's destructor called." << std::endl;
}
