#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
public:
	void	makeSound(void) const;

	void	setType(std::string type);

	std::string	getType(void) const;

	WrongAnimal &operator=(WrongAnimal const &rhs);
	
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(WrongAnimal const &rhs);

	virtual ~WrongAnimal();
protected:
	std::string _type;
};

#endif