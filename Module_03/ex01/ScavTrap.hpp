#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{
    public:
        //constructeur
        ScavTrap( void );
        //constructeur avec init
        ScavTrap( std::string name);
        //constructeur recopie
        //ClapTrap( ClapTrap const & src );
        //operateur d'affectation
        //ClapTrap & operator=( ClapTrap const & rhs );
        //destructeur
        ~ScavTrap( void );

        //ex01
        void guardGate();
};
