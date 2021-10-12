#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// const Animal *meta = new Animal();
	const Animal *cat = new Cat();
	const Animal *dog = new Dog();
	std::cout << std::endl;

	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << std::endl;
	
	cat->makeSound();
	dog->makeSound();
	std::cout << std::endl;
	
	delete cat;
	delete dog;
	return (0);
}