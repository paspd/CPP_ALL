#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
public:
	virtual void makeSound(void) const;

	Dog &operator=(Dog const &rhs);

	Dog(Dog const &rhs);
	Dog(std::string type);
	Dog();
	
	virtual ~Dog();
private:
	Brain *_brain;
};

#endif