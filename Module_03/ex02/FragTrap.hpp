#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap{
    public:
        //constructeur
        FragTrap( void );
        //constructeur avec init
        FragTrap( std::string name);
        //constructeur recopie
        FragTrap( FragTrap const & src );
        //operateur d'affectation
        FragTrap & operator=( FragTrap const & rhs );
        //destructeur
        ~FragTrap( void );

        //ex01
        void highFivesGuys();
};

#endif