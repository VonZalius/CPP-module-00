#ifndef A_ANIMAL_HPP
# define A_ANIMAL_HPP

#include <iostream>
#include <string>

class A_Animal{
    public:
        //constructeur
        A_Animal( void );
        //constructeur recopie
        A_Animal( A_Animal const & src );
        //operateur d'affectation
        A_Animal & operator=( A_Animal const & rhs );
        //destructeur
        virtual ~A_Animal( void );

        //ex00
        std::string getType() const;
        virtual void makeSound() const = 0;

    protected:
        std::string _type;

    private:

};

#endif