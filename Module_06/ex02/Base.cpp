#include "Base.hpp"

Base *Base::generate(void)
{
    srand(time(0));
    if(rand() % 3 == 0)
    {
        std::cout << "A created" << std::endl;
        return (new A);
    }
    else if(rand() % 3 == 1)
    {
        std::cout << "B created" << std::endl;
        return (new B);
    }
    else
    {
        std::cout << "C created" << std::endl;
        return (new C);        
    }
    return NULL;
}

void Base::identify(Base* p)
{
    if (dynamic_cast<A* >(p))
        std::cout << "That is a A" << std::endl;
    else if (dynamic_cast<B* >(p))
        std::cout << "That is a B" << std::endl;
    else if (dynamic_cast<C* >(p))
        std::cout << "That is a C" << std::endl;
    else
        std::cout << "What the flip ??" << std::endl;
}

void Base::identify(Base& p)
{
    int i = 0;
    try
    {
        dynamic_cast<A&>(p);
        std::cout << "That is a A" << std::endl;

    }
    catch(const std::exception& e)
    {
        i++;
    }
    try
    {
        dynamic_cast<B&>(p);
        std::cout << "That is a B" << std::endl;
    }
    catch(const std::exception& e)
    {
        i++;
    }
    try
    {
        dynamic_cast<C&>(p);
        std::cout << "That is a C" << std::endl;
    }
    catch(const std::exception& e)
    {
        i++;
    }
    if (i == 3)
        std::cout << "What the flip ??" << std::endl;
}