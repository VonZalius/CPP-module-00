#include "ScalarConverter.hpp"

//constructeur
ScalarConverter::ScalarConverter( void )
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
ScalarConverter::ScalarConverter( ScalarConverter const & src )
{
    *this = src;
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
}

//operateur d'affectation
ScalarConverter & ScalarConverter::operator=( ScalarConverter const & rhs )
{
    //il faud bien ca pour la forme canonique !
    *this = rhs;
    return (*this);
}

//destructeur
ScalarConverter::~ScalarConverter( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl;
}

//ex00
int what_type_it_is(const std::string& literal)
{
    int type = 1;

    if (!isdigit(literal[0]) && literal[0] != '-')
        return 0;
    for (int i = 0; i < (int)literal.length(); i++)
    {
        if (literal[i] == '.')
            type = 3;
        if (literal[i] == 'f' && type == 3)
            type = 2;
    }
    return type;
}

void Fchar(const std::string& literal)
{
    std::cout << "Char Literal : " << literal << std::endl << std::endl;

    std::cout << "Char : " << literal[0] << std::endl;
    std::cout << "Int : " << static_cast<int>(literal[0]) << std::endl;
    std::cout << "Float : " << static_cast<float>(literal[0]) << std::endl;
    std::cout << "Double : " << static_cast<double>(literal[0]) << std::endl;
}

void Fint(const std::string& literal)
{
    std::cout << "Int Literal : " << literal << std::endl << std::endl;

    int toInt = atoi(literal.c_str());

    std::cout << "Char : " << static_cast<char>(toInt) << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << static_cast<float>(toInt) << std::endl;
    std::cout << "Double : " << static_cast<double>(toInt) << std::endl;
}

void Ffloat(const std::string& literal)
{
    std::cout << "Float Literal : " << literal << std::endl << std::endl;

    float toFloat = atof(literal.c_str());
    std::cout << "Char : " << static_cast<char>(toFloat) << std::endl;
    std::cout << "Int : " << static_cast<int>(toFloat) << std::endl;
    std::cout << "Float : " << toFloat << std::endl;
    std::cout << "Double : " << static_cast<double>(toFloat) << std::endl;
}

void Fdouble(const std::string& literal)
{
    std::cout << "Double Literal : " << literal << std::endl << std::endl;

    double toDouble = strtod(literal.c_str(), 0);
    std::cout << "Char : " << static_cast<char>(toDouble) << std::endl;
    std::cout << "Int : " << static_cast<int>(toDouble) << std::endl;
    std::cout << "Float : " << static_cast<float>(toDouble) << std::endl;
    std::cout << "Double : " << toDouble << std::endl;
}

int error_and_specials(const std::string& literal)
{
    if (isalpha(literal[0]) && isalpha(literal[1]))
        return 1;
    return 0;
}

void ScalarConverter::convert(const std::string& literal)
{
    if (error_and_specials(literal))
    {
        std::cout << "Error handler" << std::endl;
        return;
    }
    int type = what_type_it_is(literal);
    void (*Fonctions_Print[4])(const std::string&) = { Fchar, Fint, Ffloat, Fdouble };
    Fonctions_Print[type](literal);
}