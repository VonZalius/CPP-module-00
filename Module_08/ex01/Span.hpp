#ifndef SPAN_HPP
# define SPAN_HPP

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

class Span{
    public:
        //constructeur avec init
        Span( unsigned int N);
        //constructeur recopie
        Span( Span const & src );
        //operateur d'affectation
        Span & operator=( Span const & rhs );
        //destructeur
        ~Span( void );

        //ex01
        void addNumber(int i);
        int shortestSpan();
        int longestSpan();
        void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);

    private:
        //constructeur
        Span( void );
        std::vector<int> _span;
        unsigned int _max;
};

#endif