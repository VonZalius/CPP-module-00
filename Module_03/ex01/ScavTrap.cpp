#include "ScavTrap.hpp"

//constructeur
ScavTrap::ScavTrap( void )
{
    this->_name = "scav_bot";
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Attack = 20;
    std::cout << "  ->debug : ScavTrap : Constructor called" << std::endl;
}

//constructeur avec init
ScavTrap::ScavTrap( std::string name)
{
    this->_name = name;
    this->_Hit = 100;
    this->_Energy = 50;
    this->_Attack = 20;
    std::cout << "  ->debug : ScavTrap : Constructor Init called" << std::endl;
}

//destructeur
ScavTrap::~ScavTrap( void )
{
    std::cout << "  ->debug : ScavTrap : Destructor called" << std::endl; 
}

//ex02
void ScavTrap::guardGate()
{
    std::cout << "ScavTrap i now in Gate Keeper mod ! ( be afraid )" << std::endl;
}