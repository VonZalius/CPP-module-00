#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>

template< typename T >
class Array{
    public:
        //constructeur
        Array() : _num(0)
        {
            _elements = new T[0];
        }

        Array( unsigned int n) : _num(n)
        {
            _elements = new T[n];
        }

        //constructeur recopie
        Array( Array const & src ) : _num(src._num)
        {
            _elements = new T[_num];
            for (unsigned int i = 0; i < _num; i++)
                _elements[i] = src._elements[i];
        }

        //operateur d'affectation
        Array & operator=( Array const & rhs )
        {
            if (this != &rhs)
            {
                delete[] _elements;
                _num = rhs._num;
                _elements = new T[_num];
                for (unsigned int i = 0; i < _num; i++)
                    _elements[i] = rhs._elements[i];
            }
        }

        T& operator[]( unsigned int i ) const
        {
            if ( i >= _num )
                throw OutOfBoundsException();
            return _elements[i];
        }

        //destructeur
        ~Array( void )
        {
            delete [] _elements; 
        }

        unsigned int size()
        {
            return(_num);
        }

        class OutOfBoundsException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Index out of bound");
                }
        };

    private:
        unsigned int _num;
        T * _elements;
};

#endif