#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap{
    public:
        //constructeur
        ClapTrap( void );
        //constructeur avec init
        ClapTrap( std::string name);
        //constructeur recopie
        //ClapTrap( ClapTrap const & src );
        //operateur d'affectation
        //ClapTrap & operator=( ClapTrap const & rhs );
        //destructeur
        ~ClapTrap( void );

        //ex00
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected:
        std::string _name;
        int _Hit;
        int _Energy;
        int _Attack;
};

#endif