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

//constructeur recopie
ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
    *this = src;
    std::cout << "  ->debug : ScavTrap : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
ScavTrap & ScavTrap::operator=( ScavTrap const & src )
{
    this->_name = src._name;
    this->_Hit = src._Hit;
    this->_Energy = src._Energy;
    this->_Attack = src._Attack;
    return *this;
}

//destructeur
ScavTrap::~ScavTrap( void )
{
    std::cout << "  ->debug : ScavTrap : Destructor called" << std::endl; 
}

//ex02
void ScavTrap::guardGate()
{
    if(this->_Hit > 0)
        std::cout << "ScavTrap i now in Gate Keeper mod ! ( be afraid )" << std::endl;
    else
        std::cout << this->_name << " is dead... soooo... Grave Keeper mod ?" << std::endl;
}