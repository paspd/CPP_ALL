#include "WrongDog.hpp"

void	WrongDog::makeSound(void) const
{
	std::cout << "WrongDog " << this->_type << " barks" << std::endl;
}

WrongDog	&WrongDog::operator=(WrongDog const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongDog::WrongDog(WrongDog const &rhs): WrongAnimal(rhs)
{
	this->_type = rhs.getType();
	std::cout << "WrongDog creator by copy called" << std::endl;
}

WrongDog::WrongDog(std::string type): WrongAnimal(type)
{
	this->_type = type;
	std::cout << "WrongDog creator by string called" << std::endl;
}

WrongDog::WrongDog(): WrongAnimal()
{
	this->_type = "WrongDog";
	std::cout << "WrongDog default creator called" << std::endl;
}

WrongDog::~WrongDog()
{
	std::cout << "WrongDog default destructor called" << std::endl;
}