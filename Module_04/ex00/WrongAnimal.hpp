#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal{
    public:
        //constructeur
        WrongAnimal( void );
        //constructeur recopie
        WrongAnimal( WrongAnimal const & src );
        //operateur d'affectation
        WrongAnimal & operator=( WrongAnimal const & rhs );
        //destructeur
        virtual ~WrongAnimal( void );

        //ex00
        std::string getType() const;
        void makeSound() const;

    protected:
        std::string _type;

    private:

};

#endif