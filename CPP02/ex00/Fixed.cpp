#include "Fixed.hpp"

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int fixedPoint)
{
	this->_fixedPoint = fixedPoint;
}

Fixed &Fixed::operator=(Fixed const &fixedCopy){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &fixedCopy)
		this->_fixedPoint = fixedCopy.getRawBits();
	return (*this);
}

Fixed::Fixed(): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const &fixedCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixedCopy;
}
