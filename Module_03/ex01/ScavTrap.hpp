#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public ClapTrap{
    public:
        //constructeur
        ScavTrap( void );
        //constructeur avec init
        ScavTrap( std::string name);
        //constructeur recopie
        ScavTrap( ScavTrap const & src );
        //operateur d'affectation
        ScavTrap & operator=( ScavTrap const & rhs );
        //destructeur
        ~ScavTrap( void );

        //ex01
        void guardGate();
};

#endif
