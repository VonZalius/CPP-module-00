#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class BitcoinExchange{
    public:
        //constructeur
        BitcoinExchange();
        //constructeur recopie
        BitcoinExchange( BitcoinExchange const & src );
        //operateur d'affectation
        BitcoinExchange & operator=( BitcoinExchange const & rhs );
        //destructeur
        ~BitcoinExchange( void );

        //ex00

    private:

};

#endif