#include "Brain.hpp"

//constructeur
Brain::Brain( void )
{
    std::cout << "  ->debug : Brain : Constructor called" << std::endl;
}

//constructeur recopie
Brain::Brain( Brain const & src )
{
    *this = src;
    std::cout << "  ->debug : Brain :Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
Brain & Brain::operator=( Brain const & src )
{
    for (int i = 0; i < 100; i++)
            this->_ideas[i] = src._ideas[i];
    return *this;
}

//destructeur
Brain::~Brain( void )
{
    std::cout << "  ->debug : Brain : Destructor called" << std::endl; 
}