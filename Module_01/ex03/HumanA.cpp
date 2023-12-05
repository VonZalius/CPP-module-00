
#include "HumanA.hpp"

//constructeur
HumanA::HumanA(std::string name, Weapon& weapon): _name(name), _weapon(weapon)
{
}
//destructeur
HumanA::~HumanA()
{
}

void HumanA::attack()
{
    std::string type = this->_weapon.getType();
    std::cout << this->_name << " attacks with their " << type << std::endl;
}