#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"
#include "A_Animal.hpp"
#include <iostream>
#include <string>

class Dog : public A_Animal{
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
    
    private:
        Brain* brain;
};

#endif