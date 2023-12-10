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

//destructeur
ClapTrap::~ClapTrap( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}


//ex00
void ClapTrap::attack(const std::string& target)
{
    if(this->_Energy > 0)
    {
        this->_Energy--;
        std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_Attack << " points of damage!" << std::endl;
    }
    else
       std::cout << "Not enough Energy for " << this->_name << " ..." << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if(this->_Hit > 0)
    {
        this->_Hit -= amount;
        std::cout << "ClapTrap " << this->_name << " loose " << amount << " life point ! ( Hit ) He has now " << this->_Hit << " Hit remaining... " << std::endl;
    }
    else
       std::cout << "No more life Point for " << this->_name << " ..." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if(this->_Energy > 0)
    {
        this->_Energy--;
        this->_Hit += amount;
        std::cout << "ClapTrap " << this->_name << " repaired himself for " << amount << " Points! He has now " << this->_Hit << " life Points !" << std::endl;
    }
    else
       std::cout << "Not enough Energy for " << this->_name << " ..." << std::endl;
}