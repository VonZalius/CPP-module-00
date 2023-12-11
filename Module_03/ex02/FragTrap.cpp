#include "FragTrap.hpp"

//constructeur
FragTrap::FragTrap( void )
{
    this->_name = "frag_bot";
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Attack = 30;
    std::cout << "  ->debug : FragTrap : Constructor called" << std::endl;
}

//constructeur avec init
FragTrap::FragTrap( std::string name)
{
    this->_name = name;
    this->_Hit = 100;
    this->_Energy = 100;
    this->_Attack = 30;
    std::cout << "  ->debug : FragTrap : Constructor Init called" << std::endl;
}

//destructeur
FragTrap::~FragTrap( void )
{
    std::cout << "  ->debug : FragTrap : Destructor called" << std::endl; 
}

//ex02
void FragTrap::highFivesGuys()
{
    if(this->_Hit > 0)
        std::cout << "Yea, High Fives ! Come on guys ! Come on do it... Dont leave me hanging bros... Guys..?" << std::endl;
    else
        std::cout << this->_name << " is dead... no more high fives :(" << std::endl;
}