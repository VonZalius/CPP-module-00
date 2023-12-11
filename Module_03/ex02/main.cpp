#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

/*using std::cout;
using std::endl;

int main(void)
{
	FragTrap John("John");
	FragTrap Albert("Albert");

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	John.attack("Albert");
	Albert.takeDamage(30);

	cout << endl;

	Albert.beRepaired(100);

	cout << endl;

	Albert.highFivesGuys();

	cout << endl;

	Albert.takeDamage(100);

	return EXIT_SUCCESS;
}*/

int main() {
	ClapTrap *c1 = new ClapTrap();
	ClapTrap *c2 = new ClapTrap("Zoro");
	//ClapTrap *c3 = new ClapTrap(*c1);

	std::cout << std::endl;

	c1->attack("Slime");
	c2->attack("Sanji");
	//c3->attack("Slime shiny");

	std::cout << std::endl;

	c1->takeDamage(80);
	c2->takeDamage(5);
	//c2->takeDamage(5);
	//c2->takeDamage(5);
	//c3->takeDamage(5);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	c2->beRepaired(1);
	//c3->beRepaired(5);

	std::cout << std::endl;

	delete c1;
	delete c2;
	//delete c3;


std::cout << "ScavTime !! ============================================================================" << std::endl;

	ClapTrap *cs1 = new ClapTrap();
	ScavTrap *cs2 = new ScavTrap("Zoro");
	ScavTrap *aux = new ScavTrap();
	//ScavTrap *c3 = new ScavTrap(*aux);

	std::cout << std::endl;

	cs1->attack("Slime");
	cs2->attack("Sanji");
	//c3->attack("Slime shiny");

	std::cout << std::endl;

	cs1->takeDamage(80);
	cs2->takeDamage(50);
	cs2->takeDamage(50);
	//c3->takeDamage(5);

	std::cout << std::endl;

	cs1->beRepaired(1000);
	cs2->beRepaired(1);
	//c3->beRepaired(5);

	std::cout << std::endl;

	cs2->guardGate();
	//c3->guardGate();

	std::cout << std::endl;

	delete cs1;
	delete cs2;
	delete aux;
	//delete c3;

std::cout << "FragTime !! ============================================================================" << std::endl;


	ScavTrap *cf1 = new ScavTrap();
	FragTrap *cf2 = new FragTrap("Zoro");
	FragTrap *auxf = new FragTrap();
	//FragTrap *c3 = new FragTrap(*aux);

	std::cout << std::endl;

	cf1->attack("Slime");
	cf2->attack("Sanji");
	//c3->attack("Slime shiny");

	std::cout << std::endl;

	cf1->takeDamage(80);
	cf2->takeDamage(50);
	cf2->takeDamage(50);
	//c3->takeDamage(5);

	std::cout << std::endl;

	cf1->beRepaired(1000);
	cf2->beRepaired(1);
	//c3->beRepaired(5);

	std::cout << std::endl;

	cf1->guardGate();
	cf2->highFivesGuys();
	//c3->highFivesGuys();

	std::cout << std::endl;

	delete cf1;
	delete cf2;
	delete auxf;
	//delete c3;
}