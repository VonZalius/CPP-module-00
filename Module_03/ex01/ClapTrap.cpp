#include "ClapTrap.hpp"

//constructeur
ClapTrap::ClapTrap( void ): _name("bot"), _Hit(10), _Energy(10), _Attack(0)
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur avec init
ClapTrap::ClapTrap( std::string name): _name(name), _Hit(10), _Energy(10), _Attack(0)
{
    std::cout << "  ->debug : Constructor Init called" << std::endl;
}

//constructeur recopie
ClapTrap::ClapTrap( ClapTrap const & src )
{
    *this = src;
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
ClapTrap & ClapTrap::operator=( ClapTrap const & src )
{
    this->_name = src._name;
    this->_Hit = src._Hit;
    this->_Energy = src._Energy;
    this->_Attack = src._Attack;
    return *this;
}

//destructeur
ClapTrap::~ClapTrap( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}


//ex00
void ClapTrap::attack(const std::string& target)
{
    if(this->_Hit < 1)
    {
        std::cout << this->_name << " is dead... Cant do anything..." << std::endl; 
    }
    else if(this->_Energy > 0)
    {
        this->_Energy--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    }
    else
       std::cout << "Not enough Energy for " << this->_name << " ..." << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_Hit < 1)
    {
        std::cout << this->_name << " is dead... Cant do anything..." << std::endl; 
    }
    else if(this->_Hit > 0)
    {
        this->_Hit -= amount;
        std::cout << "ClapTrap " << this->_name << " loose " << amount << " life point ! ( Hit ) He has now " << this->_Hit << " Hit remaining... " << std::endl;
    }
    else
       std::cout << "No more life Point for " << this->_name << " ..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_Hit < 1)
    {
        std::cout << this->_name << " is dead... Cant do anything..." << std::endl; 
    }
    else if(this->_Energy > 0)
    {
        this->_Energy--;
        this->_Hit += amount;
        std::cout << "ClapTrap " << this->_name << " repaired himself for " << amount << " Points! He has now " << this->_Hit << " life Points !" << std::endl;
    }
    else
       std::cout << "Not enough Energy for " << this->_name << " ..." << std::endl;
}