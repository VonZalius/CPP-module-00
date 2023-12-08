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


//ex00 ===================================================================
int Fixed::getRawBits(void) const
{
    //std::cout << "getRawBits member function called" << std::endl;
    return this->_fixe;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixe = raw;
}

//ex01 ===================================================================
Fixed::Fixed( int const ci ): _fixe(ci << this->_frac)
{
    std::cout << "Contructeur INT" << std::endl;
}

Fixed::Fixed( float const cf)
{
	std::cout << "Consstructeur FLOAT" << std::endl;
	this->_fixe = roundf(cf *(1 << Fixed::_frac));
}

float Fixed::toFloat( void ) const
{
    //std::cout << "ToFloat" << std::endl;
    return ((float)this->_fixe / (1 << this->_frac));

}

int Fixed::toInt( void ) const
{
    //std::cout << "ToInt" << std::endl;
    return (this->_fixe >> this->_frac);
}

std::ostream & operator<<( std::ostream & o, Fixed const & fix)
{
    o << fix.toFloat();
    return o;
}