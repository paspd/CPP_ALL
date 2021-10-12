#include "WrongAnimal.hpp"

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimal " << this->_type << " makes an indescribable sound" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return (this->_type);
}

void	WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "WrongAnimal assignation opperator called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs): _type(rhs.getType())
{
	std::cout << "WrongAnimal creator by copy called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
	std::cout << "WrongAnimal creator by string called" << std::endl;
}

WrongAnimal::WrongAnimal(): _type("WrongAnimal")
{
	std::cout << "WrongAnimal default creator called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal default destructor called" << std::endl;
}