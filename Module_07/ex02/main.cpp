#include "array.hpp"

int main(void)
{
    Array<int> a(51);
    
    try
    {
        a[6] = 8;
        std::cout << a[5] << std::endl;
        std::cout << a[50] << std::endl;
    }
    catch( Array< int >::OutOfBoundsException& e )
    {
        std::cout << "index is out of range" << std::endl;
    }
    return (0);
}
