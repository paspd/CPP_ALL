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

	static Fixed &max(Fixed &rhs1, Fixed &rhs2);
	static Fixed const &max(Fixed const &rhs1, Fixed const &rhs2);

	static Fixed &min(Fixed &rhs1, Fixed &rhs2);
	static Fixed const &min(Fixed const &rhs1, Fixed const &rhs2);


	Fixed & operator=(Fixed const &rhs);
	Fixed operator+(Fixed const &rhs) const;
	Fixed operator-(Fixed const &rhs) const;
	Fixed operator*(Fixed const &rhs) const;
	Fixed operator/(Fixed const &rhs) const;

	//COMPARAISON
	int operator<(Fixed const &rhs) const;
	int operator<=(Fixed const &rhs) const;
	int operator>(Fixed const &rhs) const;
	int operator>=(Fixed const &rhs) const;
	int operator==(Fixed const &rhs) const;
	int operator!=(Fixed const &rhs) const;

	//PREFIX
	Fixed& operator++();
	Fixed& operator--();

	//POSTFIX
	Fixed operator++(int);
	Fixed operator--(int);

	Fixed(/* args */);
	Fixed(const int nb);
	Fixed(const float nb);
	Fixed(Fixed const &rhs);
	~Fixed();

};

std::ostream &	operator<<(std::ostream & o, Fixed const & rhs);

#endif