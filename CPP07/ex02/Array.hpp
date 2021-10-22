#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
	T *_array;
	unsigned int _size;
public:

	class WrongIdOfArray: public std::exception
	{
		public:
			const char *what() const throw(){
				return ("Wrong id of array");
			}
	};
	
	Array(): _array(NULL), _size(0) {
	}

	Array(unsigned int size): _size(size) {
		_array = new T[size];
	}

	Array(Array const & rhs) {
		_array = rhs._array;
		_size = rhs.size;
	}

	Array &operator=(Array const & rhs) {
		_array = rhs._array;
		_size = rhs._size;
		return (*this);
	}

	T	&operator[](unsigned int const & id) {
		if (id >= _size || id < 0)
			throw WrongIdOfArray();
		return (_array[id]);
	}

	unsigned int & size() {
		return (_size);
	}

	virtual ~Array() {
	}
};

#endif