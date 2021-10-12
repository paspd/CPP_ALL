#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
public:
	void makeSound(void) const;

	WrongDog &operator=(WrongDog const &rhs);

	WrongDog(WrongDog const &rhs);
	WrongDog(std::string type);
	WrongDog();
	
	virtual ~WrongDog();
};

#endif