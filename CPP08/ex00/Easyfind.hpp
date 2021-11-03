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
	if (std::find(list.begin(), list.end(), nb) == list.end())
		throw NumberNotFound();
	else
		return nb;
}

#endif