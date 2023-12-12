#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal{
    public:
        //constructeur
        WrongCat( void );
        //constructeur recopie
        WrongCat( WrongCat const & src );
        //operateur d'affectation
        WrongCat & operator=( WrongCat const & rhs );
        //destructeur
        ~WrongCat( void );

        //ex00
        std::string getType() const;
        void makeSound() const;
};

#endif