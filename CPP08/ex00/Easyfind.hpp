#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <string>
#include <iostream>
#include <list>
#include <vector>

class NumberNotFound: public std::exception
{
	public:
		const char *what() const throw()
		{
			return ("Number not found");
		}
};

template<typename T>
int const &easyfind(T const &list, int const &nb)
{
	typename T::const_iterator ite = list.end();
	for (typename T::const_iterator it = list.begin(); it != ite; it++)
		if (*it == nb)
			return (nb);
	throw NumberNotFound();
}

#endif