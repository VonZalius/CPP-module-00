#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
    public:
        //constructeur
        Fixed( void );
        //constructeur recopie
        Fixed( Fixed const & src );
        //operateur d'affectation
        Fixed & operator=( Fixed const & rhs );
        //destructeur
        ~Fixed( void );

        //00
        int getRawBits(void) const;
        void setRawBits(int const raw);

        //01
        Fixed( int const ci );
        Fixed( float const cf);
        float toFloat( void ) const;
        int toInt( void ) const;

        //02
        bool operator>( Fixed const & source);
        bool operator<( Fixed const & source);
        bool operator>=( Fixed const & source);
        bool operator<=( Fixed const & source);
        bool operator==( Fixed const & source);
        bool operator!=( Fixed const & source);

        Fixed   operator+( Fixed const & source) const;
        Fixed   operator-( Fixed const & source) const;
        Fixed   operator*( Fixed const & source) const;
        Fixed   operator/( Fixed const & source) const;

        Fixed   operator++();
        Fixed   operator--();
        Fixed   operator++( int);
        Fixed   operator--( int);

        static Fixed   min(Fixed & s1, Fixed & s2);
        static Fixed   min(Fixed const & s1, Fixed const & s2);
        static Fixed   max(Fixed & s1, Fixed & s2);
        static Fixed   max(Fixed const & s1, Fixed const & s2);

    private:
        int _fixe;
        static int const _frac = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & fix);

#endif