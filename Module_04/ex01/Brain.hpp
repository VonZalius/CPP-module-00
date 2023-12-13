#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain{
    public:
        //constructeur
        Brain( void );
        //constructeur recopie
        Brain( Brain const & src );
        //operateur d'affectation
        Brain & operator=( Brain const & rhs );
        //destructeur
        virtual ~Brain( void );

    private:
        std::string _ideas[100];

};

#endif