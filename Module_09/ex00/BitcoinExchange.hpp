#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <map>
#include <sstream>
#include <ctime>

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
        void run(const std::string& filename);

    private:
        std::map<std::string, double> prices;
};

#endif