#include "Dog.hpp"

void	Dog::makeSound(void) const
{
	std::cout << "Dog " << this->_type << " barks" << std::endl;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	this->_type = rhs.getType();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(rhs._brain->getIdea(i), i);
	
	return (*this);
}

Dog::Dog(Dog const &rhs): Animal(rhs), _brain(new Brain())
{
	this->_type = rhs._type;
	for (int i = 0; i < 100; i++)
		this->_brain->setIdea(rhs._brain->getIdea(i), i);

	std::cout << "Dog creator by copy called" << std::endl;
}

Dog::Dog(std::string type): Animal(type), _brain(new Brain())
{
	this->_type = type;

	std::cout << "Dog creator by string called" << std::endl;
}

Dog::Dog(): Animal(), _brain(new Brain())
{
	this->_type = "Dog";

	std::cout << "Dog default creator called" << std::endl;
}

Dog::~Dog()
{
	delete _brain;

	std::cout << "Dog default destructor called" << std::endl;
}