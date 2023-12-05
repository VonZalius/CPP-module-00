
#include "HumanB.hpp"

//constructeur
HumanB::HumanB(std::string name): _name(name), _weapon(NULL)
{
}
//destructeur
HumanB::~HumanB()
{
}

void HumanB::attack()
{
    std::string type = this->_weapon->getType();
    std::cout << this->_name << " attacks with their " << type << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
    this->_weapon = &weapon;
}