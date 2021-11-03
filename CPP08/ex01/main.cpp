#include "Span.hpp"

int main()
{
	Span sp = Span(1000);
	
	std::srand(std::time(nullptr));
	
	for (size_t i = 0; i < 1000; i++)
		sp.addNumber(std::rand() % INT_MAX);				
	
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}
