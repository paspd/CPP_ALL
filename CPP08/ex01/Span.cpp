#include "Span.hpp"

int Span::shortestSpan() const
{
	if (!this->_tab_int.size())
		throw Span::ArrayEmpty();
	else if (this->_tab_int.size() == 1)
		throw Span::OnlyOneNumberInArray();
	long span = LONG_MAX;
	std::set<int>::const_iterator it1 = this->_tab_int.begin();
	std::set<int>::const_iterator ite = this->_tab_int.end();
	for (std::set<int>::const_iterator it2 = ++this->_tab_int.begin(); it2 != ite; it2++)
	{
		if (*it2 - *it1 < span)
			span = *it2 - *it1;
		it1++;
	}
	return (span);
}

int Span::longestSpan() const
{
	if (!this->_tab_int.size())
		throw Span::ArrayEmpty();
	else if (this->_tab_int.size() == 1)
		throw Span::OnlyOneNumberInArray();
	return (*--this->_tab_int.end() - *this->_tab_int.begin());
}

void Span::addNumber(int const &nb)
{
	if (this->_tab_int.size() == this->_size)
		throw Span::ArrayFull();
	this->_tab_int.insert(nb);
}

Span::Span(Span const &rhs): _size(rhs._size)
{
	this->_tab_int = rhs._tab_int;
}

Span::Span(unsigned int const & size): _size(size)
{
}

Span::Span(): _size(0)
{
}

Span::~Span()
{
}