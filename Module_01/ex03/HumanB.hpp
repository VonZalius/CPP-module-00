
#include "Weapon.hpp"
#include <iostream>

class HumanB{
    public:

        //constructeur
        HumanB(std::string name);
        //destructeur
        ~HumanB();

        void attack();
        void setWeapon(Weapon& weapon);

    private:
        std::string _name;
        Weapon* _weapon;
};