#include "Weapon.hpp"

//Constructeur
Weapon::Weapon(std::string str): _type(str)
{
}

//Destructeur
Weapon::~Weapon()
{
}


const std::string& Weapon::getType()
{
    std::string& strREF = this->_type;
    return strREF;
}

void Weapon::setType(std::string str)
{
    this->_type = str;
}