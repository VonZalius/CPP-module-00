#include "Serialization.hpp"

//constructeur
Serialization::Serialization() {}

//constructeur recopie
Serialization::Serialization( Serialization const & src) { (void) src; }

//operateur d'affectation
Serialization & Serialization::operator=( Serialization const & rhs ) { (void) rhs; return (*this); }

//destructeur
Serialization::~Serialization( void ) {}

//ex01
uintptr_t Serialization::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}