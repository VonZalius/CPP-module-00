#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <stdint.h>
#include "Data.hpp"

class Serialization{
    public:
        //operateur d'affectation
        Serialization & operator=( Serialization const & rhs );
        //destructeur
        ~Serialization( void );

        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);

    private:
        //constructeur
        Serialization();
        //constructeur recopie
        Serialization( Serialization const & src );
};

#endif