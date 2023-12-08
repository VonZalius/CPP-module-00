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


    private:
        int _fixe;
        static int const _frac = 8;
};

std::ostream & operator<<( std::ostream & o, Fixed const & fix);

#endif