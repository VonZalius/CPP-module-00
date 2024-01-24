#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <map>
#include <fstream>
#include <algorithm>
#include <exception>

template< typename T >
int easyfind( T& cont, int nbr)
{
    typename T::const_iterator     it = std::find(cont.begin(), cont.end(), nbr);

    if (it == cont.end())
        throw std::exception();
    return *it;
}

/*
template< typename T >
int easyfind( T& cont, int nbr)
{
    typename T::const_iterator     it;
    typename T::const_iterator     ite = cont.end();

    for (it = cont.begin(); *it != nbr && it != ite; ++it)
    {}

    if (it == ite)
        throw std::exception();
    return *it;
}
*/

#endif