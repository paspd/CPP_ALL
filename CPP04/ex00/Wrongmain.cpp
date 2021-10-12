#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main()
{
	const WrongAnimal *bird = new WrongAnimal("bird");
	const WrongAnimal *cat = new WrongCat();
	const WrongAnimal *dog = new WrongDog();
	std::cout << std::endl;

	std::cout << bird->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << std::endl;
	
	bird->makeSound();
	cat->makeSound();
	dog->makeSound();
	std::cout << std::endl;
	
	delete bird;
	delete cat;
	delete dog;
	return (0);
}