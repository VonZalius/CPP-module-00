#include "A_Animal.hpp"

//constructeur
A_Animal::A_Animal( void ): _type("DinoDefault")
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
A_Animal::A_Animal( A_Animal const & src )
{
    *this = src;
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
A_Animal & A_Animal::operator=( A_Animal const & src )
{
    this->_type = src._type;
    return *this;
}

//destructeur
A_Animal::~A_Animal( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}

std::string A_Animal::getType() const
{
    std::string r = this->_type;
    return r;
}

void A_Animal::makeSound() const
{
    std::cout << "Ama Dino so Ama make a Graou : GRAOOUUUUUUUUU" << std::endl;
}