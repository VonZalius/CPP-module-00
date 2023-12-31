#include "Fixed.hpp"

//constructeur
Fixed::Fixed( void )
{
    std::cout << "Constructeur" << std::endl;
    this->_fixe = 0;
    return;
}

//constructeur recopie
Fixed::Fixed( Fixed const & src )
{
    std::cout << "Constructeur de recopie" << std::endl;
    *this = src;
    //this->setRawBits(src.getRawBits());
    return;
}

//operateur d'affectation
Fixed & Fixed::operator=( Fixed const & rhs )
{
    std::cout << "Operateur d'affectation" << std::endl;

    if ( this != &rhs)
        this->_fixe = rhs.getRawBits(); 

    return *this;
}

//destructeur
Fixed::~Fixed( void )
{
    std::cout << "Destructeur" << std::endl;
    return;
}



int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixe;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixe = raw;
}