#include "Fixed.hpp"

int Fixed::toInt( void ) const
{
	return (this->_fixedPoint / (1 << this->_fractionalBits));
}

float Fixed::toFloat( void ) const
{
	return (float)this->_fixedPoint / (1 << this->_fractionalBits);
}

int Fixed::getRawBits() const
{
	return (this->_fixedPoint);
}

void Fixed::setRawBits(int fixedPoint)
{
	this->_fixedPoint = fixedPoint;
}

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}

Fixed &Fixed::operator=(Fixed const &rhs){
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const &rhs)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = rhs;
}
Fixed::Fixed(const int nb): _fixedPoint(nb << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb): _fixedPoint(std::roundf(nb * (1 << _fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

