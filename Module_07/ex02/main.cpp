#include "array.hpp"

int main(void)
{
    Array<int> a(50);
    
    try
    {
        a[5] = 42;
        std::cout << a[5] << std::endl;
        std::cout << a[50] << std::endl;
    }
    catch( Array< int >::OutOfBoundsException& e )
    {
        std::cout << "index is out of range" << std::endl;
    }
    return (0);
}
