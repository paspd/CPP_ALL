#include "Fixed.hpp"

Fixed &Fixed::max(Fixed &rhs1, Fixed &rhs2)
{
	if (rhs1 > rhs2)
		return (rhs1);
	else
		return (rhs2);
}

Fixed const &Fixed::max(Fixed const &rhs1, Fixed const &rhs2)
{
	if (rhs1 > rhs2)
		return (rhs1);
	else
		return (rhs2);
}

Fixed &Fixed::min(Fixed &rhs1, Fixed &rhs2)
{
	if (rhs1 < rhs2)
		return (rhs1);
	else
		return (rhs2);
}

Fixed const &Fixed::min(Fixed const &rhs1, Fixed const &rhs2)
{
	if (rhs1 < rhs2)
		return (rhs1);
	else
		return (rhs2);
}

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

Fixed Fixed::operator+(Fixed const &rhs) const
{
	Fixed result(this->toFloat() + rhs.toFloat());

	return (result);
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	Fixed result(this->toFloat() - rhs.toFloat());
	return (result);
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	Fixed result(this->toFloat() * rhs.toFloat());
	return (result);
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	Fixed result(this->toFloat() / rhs.toFloat());
	return (result);
}

int Fixed::operator<(Fixed const &rhs) const
{
	if (this->_fixedPoint < rhs._fixedPoint)
		return 1;
	return 0;
}

int Fixed::operator<=(Fixed const &rhs) const
{
	if (this->_fixedPoint <= rhs._fixedPoint)
		return 1;
	return 0;
}

int Fixed::operator>(Fixed const &rhs) const
{
	if (this->_fixedPoint > rhs._fixedPoint)
		return 1;
	return 0;
}

int Fixed::operator>=(Fixed const &rhs) const
{
	if (this->_fixedPoint >= rhs._fixedPoint)
		return 1;
	return 0;
}

int Fixed::operator==(Fixed const &rhs) const
{
	if (this->_fixedPoint == rhs._fixedPoint)
		return 1;
	return 0;
}

int Fixed::operator!=(Fixed const &rhs) const
{
	if (this->_fixedPoint != rhs._fixedPoint)
		return 1;
	return 0;
}

Fixed &Fixed::operator++()
{
	++this->_fixedPoint;
	return (*this);
}

Fixed &Fixed::operator--()
{
	--this->_fixedPoint;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp = *this;

	this->_fixedPoint++;
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp = *this;

	this->_fixedPoint--;
	return (temp);
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_fixedPoint = rhs.getRawBits();
	return (*this);
}

Fixed::Fixed(): _fixedPoint(0)
{
}

Fixed::Fixed(Fixed const &rhs)
{
	*this = rhs;
}
Fixed::Fixed(const int nb): _fixedPoint(nb << _fractionalBits)
{
}

Fixed::Fixed(const float nb): _fixedPoint(std::roundf(nb * (1 << _fractionalBits)))
{
}

Fixed::~Fixed()
{
}

