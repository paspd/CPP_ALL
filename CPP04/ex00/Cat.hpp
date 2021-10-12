#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal
{
public:
	void makeSound(void) const;

	Cat &operator=(Cat const &rhs);

	Cat(Cat const &rhs);
	Cat(std::string type);
	Cat();
	
	virtual ~Cat();
};

#endif