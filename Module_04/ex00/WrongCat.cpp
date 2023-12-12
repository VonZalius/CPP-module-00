#include "WrongCat.hpp"

//constructeur
WrongCat::WrongCat( void )
{
    this->_type = "WrongCat";
    std::cout << "  ->debug : WrongCat : Constructor called" << std::endl;
}

//constructeur recopie
WrongCat::WrongCat( WrongCat const & src ) : WrongAnimal(src)
{
    *this = src;
    std::cout << "  ->debug : WrongCat : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
WrongCat & WrongCat::operator=( WrongCat const & src )
{
    this->_type = src._type;
    return *this;
}

//destructeur
WrongCat::~WrongCat( void )
{
    std::cout << "  ->debug : WrongCat : Destructor called" << std::endl; 
}

std::string WrongCat::getType() const
{
    std::string r = this->_type;
    return r;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongMiaou WrongMiaou !" << std::endl;
}