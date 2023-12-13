#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();

delete meta;
delete j;
delete i;

std::cout << "Brain Time ! ===========================================" << std::endl;

const Animal* jb = new Dog();
const Animal* ib = new Cat();
delete jb;//should not create a leak
delete ib;

std::cout << "Brain more Time ! ===========================================" << std::endl;

const Animal* Bisteca = new Dog();
std::cout << std::endl;

const Animal* Junim = new Cat();
std::cout << std::endl;

std::cout << "------------------- ZOO -------------------" << std::endl;
const Animal* zoo[4];

std::cout << "------------------- DOGS -------------------" << std::endl;
for (size_t i = 0; i < 2; i += 1)
{
	zoo[i] = new Dog();
	std::cout << std::endl;
}

std::cout << "------------------- CATS -------------------" << std::endl;
for (size_t i = 2; i < 4; i += 1)
{
	zoo[i] = new Cat();
	std::cout << std::endl;
}

std::cout << "---------------- DELETE ZOO ---------------" << std::endl;
for (size_t i = 0; i < 4; i += 1)
{
	delete zoo[i];
}
std::cout << "--------------- ZOO DELETED ---------------" << std::endl;
std::cout << std::endl;

delete Bisteca;
delete Junim;

return EXIT_SUCCESS; 
}