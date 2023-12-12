#include "Cat.hpp"

//constructeur
Cat::Cat( void )
{
    this->_type = "Cat";
    std::cout << "  ->debug : Cat : Constructor called" << std::endl;
}

//constructeur recopie
Cat::Cat( Cat const & src ) : Animal(src)
{
    *this = src;
    std::cout << "  ->debug : Cat : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
Cat & Cat::operator=( Cat const & src )
{
    this->_type = src._type;
    return *this;
}

//destructeur
Cat::~Cat( void )
{
    std::cout << "  ->debug : Cat : Destructor called" << std::endl; 
}

std::string Cat::getType() const
{
    std::string r = this->_type;
    return r;
}

void Cat::makeSound() const
{
    std::cout << "Miaou Miaou !" << std::endl;
}