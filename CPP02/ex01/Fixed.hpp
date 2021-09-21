#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int _fixedPoint;
	const static int _fractionalBits = 8;
public:
	int		getRawBits() const;
	void	setRawBits(int const fixedPoint);

	int toInt( void ) const;
	float toFloat( void ) const;

	Fixed & operator=(Fixed const &rhs);

	Fixed(/* args */);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(Fixed const &rhs);
	~Fixed();
};
std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif