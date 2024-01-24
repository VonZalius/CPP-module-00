#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <stack>
#include <fstream>
#include <algorithm>
#include <exception>

template <typename T>
class MutantStack: public std::stack<T>{
    public:
        //constructeur
        MutantStack( void ){}
        //constructeur recopie
        MutantStack( MutantStack const & src ) { *this = src; }
        //destructeur
        ~MutantStack( void ) {}


        //ex02
        typedef typename std::deque< T >::iterator     iterator;
        iterator begin()
        {
            return this->c.begin();
        }
        iterator end()
        {
            return this->c.end();
        }

    private:
};

#endif