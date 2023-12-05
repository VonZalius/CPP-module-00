
#include "Weapon.hpp"
#include <iostream>

class HumanA{
    public:

        //constructeur
        HumanA(std::string name, Weapon& weapon);
        //destructeur
        ~HumanA();

        void attack();

    private:
        std::string _name;
        Weapon& _weapon;
};
