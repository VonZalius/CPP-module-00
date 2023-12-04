#include "Zombie.hpp"

//constructeur
Zombie::Zombie(std::string name)
{
	this->_name = name;
	std::cout << "Zombie object " << this->_name << " constructed" << std::endl;
}

//destructeur
Zombie::~Zombie()
{
	std::cout << "Zombie object " << this->_name << " destroyed" << std::endl;
}

void
Zombie::announce( void )
{
    std::cout << this->_name << " : BraiiiiiiinnnzzzZ..." << std::endl;
}