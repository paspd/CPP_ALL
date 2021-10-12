#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const Animal *tab[100];
	std::cout << std::endl;

	for (int i = 0; i < 100; i++)
	{
		std::cout << "Animal n°" << i << std::endl;
		if (i % 2)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
		std::cout << std::endl;
	}
	
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Animal n°" << i << std::endl;
		tab[i]->makeSound();
		std::cout << std::endl;
	}
	
	for (int i = 0; i < 100; i++)
	{
		std::cout << "Animal n°" << i << std::endl;
		delete tab[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;
	Dog bonjour("Bobby");
	std::cout << std::endl;

	Dog tmp = bonjour;
	std::cout << std::endl;

	bonjour.makeSound();
	tmp.makeSound();
	std::cout << std::endl;
}