#include "Zombie.hpp"

/* Returns pointer to Zombie object allocated with new */
Zombie	*newZombie(std::string name);

/* Creates new Zombie stored on the heap, which announces itself */
void	randomChump(std::string name);

int
main()
{
    Zombie	*zalex = newZombie("Alex");
	zalex->announce();
	randomChump("Bruno");
	delete zalex;
}