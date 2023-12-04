#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public :
        void announce( void );
        
        //contructeur
        Zombie(std::string name);
        //destructeur
		~Zombie(void);

    private :
        std::string _name;
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif