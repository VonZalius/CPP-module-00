#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{
    public:
        //constructeur
        Dog( void );
        //constructeur recopie
        Dog( Dog const & src );
        //operateur d'affectation
        Dog & operator=( Dog const & rhs );
        //destructeur
        ~Dog( void );

        //ex00
        std::string getType() const;
        void makeSound() const;
};

#endif