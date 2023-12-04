#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie	zbruno = Zombie(name);
	zbruno.announce();
}