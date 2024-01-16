#include "A_Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
//const A_Animal* meta = new A_Animal();
const A_Animal* j = new Dog();
const A_Animal* i = new Cat();
//std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
//meta->makeSound();

//delete meta;
delete j;
delete i;

std::cout << "Brain Time ! ===========================================" << std::endl;

const A_Animal* jb = new Dog();
const A_Animal* ib = new Cat();
delete jb;//should not create a leak
delete ib;

std::cout << "Brain more Time ! ===========================================" << std::endl;

const A_Animal* Bisteca = new Dog();
std::cout << std::endl;

const A_Animal* Junim = new Cat();
std::cout << std::endl;

std::cout << "------------------- ZOO -------------------" << std::endl;
const A_Animal* zoo[4];

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

return 0; 
}