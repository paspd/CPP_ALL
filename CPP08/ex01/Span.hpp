#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <set>
#include <iterator>

class Span
{
private:
	std::set<int> _tab_int;
	unsigned int _size;
public:
	class ArrayFull: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Array completely full");
			}
	};

	class ArrayEmpty: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Array completely empty");
			}
	};

	class OnlyOneNumberInArray: public std::exception
	{
		public:
			const char *what() const throw()
			{
				return ("Only one number in array");
			}
	};

	int shortestSpan() const;
	int longestSpan() const;

	void addNumber(int const & number);

	Span &operator=(Span const &rhs);

	Span(Span const & rhs);
	Span(unsigned int const &size);
	Span(/* args */);
	~Span();
};

#endif