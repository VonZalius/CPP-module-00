#include "Animal.hpp"

//constructeur
Animal::Animal( void ): _type("DinoDefault")
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
Animal::Animal( Animal const & src )
{
    *this = src;
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
Animal & Animal::operator=( Animal const & src )
{
    this->_type = src._type;
    return *this;
}

//destructeur
Animal::~Animal( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}

std::string Animal::getType() const
{
    std::string r = this->_type;
    return r;
}

void Animal::makeSound() const
{
    std::cout << "Ama Dino so Ama make a Graou : GRAOOUUUUUUUUU" << std::endl;
}