#include "Zombie.hpp"

int main()
{
    int i = 5;

    Zombie *horde = zombieHorde(i, "bob");

    while(i > 0)
    {
        horde->announce();
        i--;
    }

    delete [] horde;
}