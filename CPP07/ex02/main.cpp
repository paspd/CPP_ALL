#include "Array.hpp"

int main()
{
	try
	{
		Array<unsigned int> empty;
		std::cout << empty.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array<std::string> str_tab(42);
		std::cout << str_tab.size() << std::endl;

		for (int i = 0; i < 42; i++)
			str_tab[i] = "Hello World !";

		for (int i = 0; i < 42; i++)
			std::cout << i << " " + str_tab[i] << std::endl;
		std::cout << std::endl;

		std::cout << str_tab[1000] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	
	return 0;
}