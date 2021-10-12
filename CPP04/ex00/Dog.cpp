#include "Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "Dog " << this->_type << " barks" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Dog::Dog(Dog const &rhs): Animal(rhs)
{
	this->_type = rhs.getType();
	std::cout << "Dog creator by copy called" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
	this->_type = type;
	std::cout << "Dog creator by string called" << std::endl;
}

Dog::Dog(): Animal()
{
	this->_type = "Dog";
	std::cout << "Dog default creator called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog default destructor called" << std::endl;
}