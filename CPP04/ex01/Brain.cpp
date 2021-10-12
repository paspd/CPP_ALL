#include "Brain.hpp"

void Brain::setIdea(std::string idea, int id)
{
	this->_ideas[id] = idea;
}

std::string Brain::getIdea(int id) const
{
	return (this->_ideas[id]);
}

Brain	&Brain::operator=(Brain const &rhs)
{
	std::cout << "Brain assignation opperator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

Brain::Brain(Brain const &rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain()
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = '\0';
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain default destructor called" << std::endl;
}