#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
public:
	virtual void	makeSound(void) const;

	void	setType(std::string type);

	std::string	getType(void) const;

	Animal &operator=(Animal const &rhs);
	
	Animal();
	Animal(std::string type);
	Animal(Animal const &rhs);

	virtual ~Animal();
protected:
	std::string _type;
};

#endif