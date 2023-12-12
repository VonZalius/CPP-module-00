#include "WrongAnimal.hpp"

//constructeur
WrongAnimal::WrongAnimal( void ): _type("DinoDefault")
{
    std::cout << "  ->debug : Constructor called" << std::endl;
}

//constructeur recopie
WrongAnimal::WrongAnimal( WrongAnimal const & src )
{
    *this = src;
    std::cout << "  ->debug : Constructor Copy called" << std::endl;
    return;
}

//operateur d'affectation
WrongAnimal & WrongAnimal::operator=( WrongAnimal const & src )
{
    this->_type = src._type;
    return *this;
}

//destructeur
WrongAnimal::~WrongAnimal( void )
{
    std::cout << "  ->debug : Destructor called" << std::endl; 
}

std::string WrongAnimal::getType() const
{
    std::string r = this->_type;
    return r;
}

void WrongAnimal::makeSound() const
{
    std::cout << "Ama WrongDino so Ama make a WrongGraou : WRONGGRAOOUUUUUUUUU" << std::endl;
}