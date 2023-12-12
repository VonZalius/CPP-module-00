#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
    public:
        //constructeur
        Cat( void );
        //constructeur recopie
        Cat( Cat const & src );
        //operateur d'affectation
        Cat & operator=( Cat const & rhs );
        //destructeur
        ~Cat( void );

        //ex00
        std::string getType() const;
        void makeSound() const;
};

#endif