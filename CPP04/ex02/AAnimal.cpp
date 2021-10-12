#include "AAnimal.hpp"

std::string	Animal::getType() const
{
	return (this->_type);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Animal assignation opperator called" << std::endl;
	this->_type = rhs.getType();
	return (*this);
}

Animal::Animal(Animal const &rhs): _type(rhs.getType())
{
	std::cout << "Animal creator by copy called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
	std::cout << "Animal creator by string called" << std::endl;
}

Animal::Animal(): _type("Animal")
{
	std::cout << "Animal default creator called" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}