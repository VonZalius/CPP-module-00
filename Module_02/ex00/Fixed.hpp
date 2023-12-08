#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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

        //accesseur ?

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int _fixe;
        static int const _frac = 8;
};

#endif