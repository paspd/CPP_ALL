#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
public:
	void makeSound(void) const;

	WrongCat &operator=(WrongCat const &rhs);

	WrongCat(WrongCat const &rhs);
	WrongCat(std::string type);
	WrongCat();
	
	virtual ~WrongCat();
};

#endif