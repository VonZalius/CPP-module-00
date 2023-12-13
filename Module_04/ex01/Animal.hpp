#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal{
    public:
        //constructeur
        Animal( void );
        //constructeur recopie
        Animal( Animal const & src );
        //operateur d'affectation
        Animal & operator=( Animal const & rhs );
        //destructeur
        virtual ~Animal( void );

        //ex00
        std::string getType() const;
        virtual void makeSound() const;

    protected:
        std::string _type;

    private:

};

#endif