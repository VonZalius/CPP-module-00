#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
    public:
        //constructeur
        FragTrap( void );
        //constructeur avec init
        FragTrap( std::string name);
        //constructeur recopie
        //ClapTrap( ClapTrap const & src );
        //operateur d'affectation
        //ClapTrap & operator=( ClapTrap const & rhs );
        //destructeur
        ~FragTrap( void );

        //ex01
        void highFivesGuys();
};
