#include "Fixed.hpp"

//constructeur
Fixed::Fixed( void )
{
    //std::cout << "Constructeur" << std::endl;
    this->_fixe = 0;
    return;
}

//constructeur recopie
Fixed::Fixed( Fixed const & src )
{
    //std::cout << "Constructeur de recopie" << std::endl;
    *this = src;
    //this->setRawBits(src.getRawBits());
    return;
}

//operateur d'affectation
Fixed & Fixed::operator=( Fixed const & rhs )
{
    //std::cout << "Operateur d'affectation" << std::endl;

    if ( this != &rhs)
        this->_fixe = rhs.getRawBits(); 

    return *this;
}

//destructeur
Fixed::~Fixed( void )
{
    //std::cout << "Destructeur" << std::endl;
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
    //std::cout << "Contructeur INT" << std::endl;
}

Fixed::Fixed( float const cf)
{
	//std::cout << "Consstructeur FLOAT" << std::endl;
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

//ex02 ===================================================================
//comparaison
bool Fixed::operator>( Fixed const & source)
{
    if(this->getRawBits() > source.getRawBits())
        return 1;
    else
        return 0;
}

bool Fixed::operator<( Fixed const & source)
{
    if(this->getRawBits() < source.getRawBits())
        return 1;
    else
        return 0;
}

bool Fixed::operator>=( Fixed const & source)
{
    if(this->getRawBits() >= source.getRawBits())
        return 1;
    else
        return 0;
}

bool Fixed::operator<=( Fixed const & source)
{
    if(this->getRawBits() <= source.getRawBits())
        return 1;
    else
        return 0;
}

bool Fixed::operator==( Fixed const & source)
{
    if(this->getRawBits() == source.getRawBits())
        return 1;
    else
        return 0;
}

bool Fixed::operator!=( Fixed const & source)
{
    if(this->getRawBits() != source.getRawBits())
        return 1;
    else
        return 0;
}

//arithmétique
Fixed  Fixed::operator+( Fixed const & source) const
{
    return Fixed( this->toFloat() + source.toFloat());
}

Fixed  Fixed::operator-( Fixed const & source) const
{
    return Fixed( this->toFloat() - source.toFloat());
}

Fixed  Fixed::operator*( Fixed const & source) const
{
    return Fixed( this->toFloat() * source.toFloat());
}

Fixed  Fixed::operator/( Fixed const & source) const
{
    return Fixed( this->toFloat() / source.toFloat());
}

//incrémentation
Fixed   Fixed::operator++()
{
    this->_fixe++;
    return Fixed( *this);
}

Fixed   Fixed::operator--()
{
    this->_fixe--;
    return Fixed( *this);
}

Fixed   Fixed::operator++( int)
{
    Fixed copy(*this);
    this->_fixe++;
    return Fixed( copy);
}

Fixed   Fixed::operator--( int)
{
    Fixed copy(*this);
    this->_fixe--;
    return Fixed( copy);
}

//surcharges
Fixed   Fixed::min(Fixed & s1, Fixed & s2)
{
    if(s1.getRawBits() < s2.getRawBits())
        return s1;
    else
        return s2;
}

Fixed   Fixed::min(Fixed const & s1, Fixed const & s2)
{
    if(s1.getRawBits() < s2.getRawBits())
        return s1;
    else
        return s2;
}

Fixed   Fixed::max(Fixed & s1, Fixed & s2)
{
    if(s1.getRawBits() > s2.getRawBits())
        return s1;
    else
        return s2;
}

Fixed   Fixed::max(Fixed const & s1, Fixed const & s2)
{
    if(s1.getRawBits() > s2.getRawBits())
        return s1;
    else
        return s2;
}
