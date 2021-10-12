#include "Cat.hpp"

void	Cat::makeSound(void) const
{
	std::cout << "Cat " << this->_type << " mews" << std::endl;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(rhs._brain->getIdea(i), i);
	
	return (*this);
}

Cat::Cat(Cat const &rhs): Animal(rhs), _brain(new Brain())
{
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(rhs._brain->getIdea(i), i);

	std::cout << "Cat creator by copy called" << std::endl;
}

Cat::Cat(std::string type): Animal(type), _brain(new Brain())
{
	this->_type = type;

	std::cout << "Cat creator by string called" << std::endl;
}

Cat::Cat(): Animal(), _brain(new Brain())
{
	this->_type = "Cat";

	std::cout << "Cat default creator called" << std::endl;
}

Cat::~Cat()
{
	delete _brain;

	std::cout << "Cat default destructor called" << std::endl;
}