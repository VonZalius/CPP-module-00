#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public :
        void announce( void );
        void setName(std::string name);
        
        //contructeur
        //Zombie(std::string name);
        Zombie( void );
        //destructeur
		~Zombie(void);

    private :
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif