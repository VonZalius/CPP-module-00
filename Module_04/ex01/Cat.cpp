#include "Cat.hpp"

//constructeur
Cat::Cat( void )
{
    this->_type = "Cat";
    this->brain = new Brain();
    std::cout << "  ->debug : Cat : Constructor called" << std::endl;
}

//constructeur recopie
Cat::Cat( Cat const & src ) : Animal(src)
{
    *this = src;
    this->brain = new Brain();
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
    delete this->brain;
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