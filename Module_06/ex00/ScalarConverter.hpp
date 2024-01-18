#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScalarConverter{
    public:
        //constructeur
        ScalarConverter();
        //constructeur recopie
        ScalarConverter( ScalarConverter const & src );
        //operateur d'affectation
        ScalarConverter & operator=( ScalarConverter const & rhs );
        //destructeur
        ~ScalarConverter( void );

        //ex00
        static void convert(const std::string& literal);

    private:

};

#endif