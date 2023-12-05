
#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
    public:
        //Constructeur
        Weapon(std::string str);
        //Destructeur
        ~Weapon(void);

        void setType(std::string str);
        const std::string& getType();

    private:
        std::string _type;
};

#endif