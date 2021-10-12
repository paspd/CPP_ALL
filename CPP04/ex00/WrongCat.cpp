#include "WrongCat.hpp"

void	WrongCat::makeSound(void) const
{
	std::cout << "WrongCat " << this->_type << " mews" << std::endl;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

WrongCat::WrongCat(WrongCat const &rhs): WrongAnimal(rhs)
{
	this->_type = rhs.getType();
	std::cout << "WrongCat creator by copy called" << std::endl;
}

WrongCat::WrongCat(std::string type): WrongAnimal(type)
{
	this->_type = type;
	std::cout << "WrongCat creator by string called" << std::endl;
}

WrongCat::WrongCat(): WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat default creator called" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat default destructor called" << std::endl;
}