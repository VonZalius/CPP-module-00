#include "BitcoinExchange.hpp"

//constructeur
BitcoinExchange::BitcoinExchange( void )
{
    //std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
BitcoinExchange::BitcoinExchange( BitcoinExchange const & src )
{
    *this = src;
    //std::cout << "  ->debug : Constructor Copy called" << std::endl;
}

//operateur d'affectation
BitcoinExchange & BitcoinExchange::operator=( BitcoinExchange const & rhs )
{
    *this = rhs;
    return (*this);
}

//destructeur
BitcoinExchange::~BitcoinExchange( void )
{
    //std::cout << "  ->debug : Destructor called" << std::endl;
}

//ex00
