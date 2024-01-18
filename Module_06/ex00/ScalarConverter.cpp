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
        if (isdigit(literal[i]) && type == 3 && literal[i] != '0')
            type = 5;
        if (literal[i] == 'f' && type == 3)
            type = 2;
        if (literal[i] == 'f' && type == 5)
            type = 4;
    }
    return type;
}

int lets_char(int nbr)
{
    if (nbr > 32 && nbr < 256)
        return nbr;
    else if (nbr >= 0 && nbr < 33)
        return 0;
    else
        return 1;
}

void Fchar(const std::string& literal, int arg)
{
    arg++;
    //std::cout << "Char Literal : " << literal << std::endl << std::endl;

    if (lets_char(literal[0]) == 0)
        std::cout << "Char : Impossible à afficher" << std::endl;
    else if (lets_char(literal[0]) == 1)
        std::cout << "Char : Inconnu" << std::endl;
    else
        std::cout << "Char : \'" << literal[0] << '\'' << std::endl;
    std::cout << "Int : " << static_cast<int>(literal[0]) << std::endl;
    std::cout << "Float : " << static_cast<float>(literal[0]) << ".0f" << std::endl;
    std::cout << "Double : " << static_cast<double>(literal[0]) << ".0" << std::endl;
}

void Fint(const std::string& literal, int arg)
{
    arg++;
    //std::cout << "Int Literal : " << literal << std::endl << std::endl;

    int toInt = atoi(literal.c_str());

    if (lets_char(toInt) == 0)
        std::cout << "Char : Impossible à afficher" << std::endl;
    else if (lets_char(toInt) == 1)
        std::cout << "Char : Inconnu" << std::endl;
    else
        std::cout << "Char : \'" << static_cast<char>(toInt) << '\'' << std::endl;
    std::cout << "Int : " << toInt << std::endl;
    std::cout << "Float : " << static_cast<float>(toInt) << ".0f" << std::endl;
    std::cout << "Double : " << static_cast<double>(toInt) << ".0" << std::endl;
}

void Ffloat(const std::string& literal, int arg)
{
    //std::cout << "Float Literal : " << literal << std::endl << std::endl;

    float toFloat = atof(literal.c_str());
    if (lets_char(static_cast<int>(toFloat)) == 0)
        std::cout << "Char : Impossible à afficher" << std::endl;
    else if (lets_char(static_cast<int>(toFloat)) == 1)
        std::cout << "Char : Inconnu" << std::endl;
    else
        std::cout << "Char : \'" << static_cast<char>(toFloat) << '\'' << std::endl;
    std::cout << "Int : " << static_cast<int>(toFloat) << std::endl;
    if (arg == 1)
    {
        std::cout << "Float : " << toFloat << "f" << std::endl;
        std::cout << "Double : " << static_cast<double>(toFloat) << std::endl;
    }
    else
    {
        std::cout << "Float : " << toFloat << ".0f" << std::endl;
        std::cout << "Double : " << static_cast<double>(toFloat) << ".0" << std::endl;
    }
}

void Fdouble(const std::string& literal, int arg)
{
    //std::cout << "Double Literal : " << literal << std::endl << std::endl;

    double toDouble = strtod(literal.c_str(), 0);

    if (lets_char(static_cast<int>(toDouble)) == 0)
        std::cout << "Char : Impossible à afficher" << std::endl;
    else if (lets_char(static_cast<int>(toDouble)) == 1)
        std::cout << "Char : Inconnu" << std::endl;
    else
        std::cout << "Char : \'" << static_cast<char>(toDouble) << '\'' << std::endl;
    std::cout << "Int : " << static_cast<int>(toDouble) << std::endl;
    if (arg == 1)
    {
        std::cout << "Float : " << static_cast<float>(toDouble) << "f" << std::endl;
        std::cout << "Double : " << toDouble << std::endl;
    }
    else
    {
        std::cout << "Float : " << static_cast<float>(toDouble) << ".0f" << std::endl;
        std::cout << "Double : " << toDouble << ".0" << std::endl;
    }
}

void ft_specials(std::string special)
{
    std::cout << "Char : Imposssible" << std::endl;
    std::cout << "Int : Impossible" << std::endl;
    std::cout << "Float : " << special << "f" << std::endl;
    std::cout << "Double : " << special << std::endl;
}

int error_and_specials(const std::string& literal)
{
    int i = 0;
    std::string specials[] = { "-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
    while (i < 6 && specials[i].compare(literal))
        i++;
    if (i < 6)
    {
        if (i < 3)
            i += 3;
        ft_specials(specials[i]);
        return 2;
    }
    else if (isalpha(literal[0]) && isalpha(literal[1]))
        return 1;
    return 0;
}

void ScalarConverter::convert(const std::string& literal)
{
    int type = error_and_specials(literal);
    if (type == 1)
    {
        std::cout << "Error with the argument" << std::endl;
        return;
    }
    else if (type == 2)
        return;
    type = what_type_it_is(literal);
    if (type >= 4)
    {
        type -= 2;
        void (*Fonctions_Print[4])(const std::string&, int) = { Fchar, Fint, Ffloat, Fdouble };
        Fonctions_Print[type](literal, 1);
    }
    else
    {
        void (*Fonctions_Print[4])(const std::string&, int) = { Fchar, Fint, Ffloat, Fdouble };
        Fonctions_Print[type](literal, 0);
    }
}