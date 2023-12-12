#include "Dog.hpp"

//constructeur
Dog::Dog( void )
{
    this->_type = "Dog";
    std::cout << "  ->debug : Dog : Constructor called" << std::endl;
}

//constructeur recopie
Dog::Dog( Dog const & src ) : Animal(src)
{
    *this = src;
    std::cout << "  ->debug : Dog : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
Dog & Dog::operator=( Dog const & src )
{
    this->_type = src._type;
    return *this;
}

//destructeur
Dog::~Dog( void )
{
    std::cout << "  ->debug : Dog : Destructor called" << std::endl; 
}

std::string Dog::getType() const
{
    std::string r = this->_type;
    return r;
}

void Dog::makeSound() const
{
    std::cout << "Ouaf Ouaf !" << std::endl;
}