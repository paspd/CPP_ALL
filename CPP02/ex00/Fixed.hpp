#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int _fixedPoint;
	static int _fractionalBits;
public:
	int		getRawBits() const;
	void	setRawBits(int const fixedPoint);
	Fixed & operator=(Fixed const &fixedCopy);
	Fixed(/* args */);
	Fixed(Fixed const &fixedCopy);
	~Fixed();
};

#endif