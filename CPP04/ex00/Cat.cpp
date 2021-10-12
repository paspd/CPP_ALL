#include "Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "Cat " << this->_type << " mews" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

Cat::Cat(Cat const &rhs): Animal(rhs)
{
	this->_type = rhs.getType();
	std::cout << "Cat creator by copy called" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
	this->_type = type;
	std::cout << "Cat creator by string called" << std::endl;
}

Cat::Cat(): Animal()
{
	this->_type = "Cat";
	std::cout << "Cat default creator called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat default destructor called" << std::endl;
}