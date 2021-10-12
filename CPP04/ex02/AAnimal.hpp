#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>
#include "Brain.hpp"

class Animal
{
public:
	virtual void	makeSound(void) const = 0;

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