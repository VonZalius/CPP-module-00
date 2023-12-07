#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed{
    public:
        //constructeur
        //constructeur recopie
        //operateur d'affectation
        //destructeur

        int getRawBits(void) const;
        void setRawBits(int const raw);

    private:
        int fixe;
        static int const frac;
};

#endif