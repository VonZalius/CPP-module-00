#include "Intern.hpp"

//constructeur
Intern::Intern( void )
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
Intern::Intern( Intern const & src )
{
    *this = src;
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
}

//operateur d'affectation
Intern & Intern::operator=( Intern const & rhs )
{
    //il faud bien ca pour la forme canonique !
    if (this == &rhs)
        return *this;
	return *this;
}

//destructeur
Intern::~Intern( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl;
}

//ex02
A_Form *make_SFonc(std::string target)
{
    return new ShrubberyCreationForm(target);
}

A_Form *make_RFonc(std::string target)
{
    return new RobotomyRequestForm(target);
}

A_Form *make_PFonc(std::string target)
{
    return new PresidentialPardonForm(target);
}

A_Form *Intern::makeForm(std::string name, std::string target)
{
    A_Form *(*tableauPointeurs[3])(std::string) = { make_SFonc, make_RFonc, make_PFonc };
    std::string foncNames[] = { "shrubbery creation", "robotomy request", "presidential pardon"};
    int i = 0;
    while (i < 3 && foncNames[i].compare(name))
        i++ ;
    if (i < 3)
        return (tableauPointeurs[i](target));
    else
        std::cout << "Fonction name non valid. Intern loose his time..." << std::endl;
    return 0;
}