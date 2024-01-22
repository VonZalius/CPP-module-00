#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template< typename T >
void iter( T * array, int leng,  void (*f)(T &) )
{
    for(int i = 0; i < leng; i++)
        f(array[i]);
}

template < typename T >
void    print( T &i )
{
    std::cout << i << std::endl;
}

#endif