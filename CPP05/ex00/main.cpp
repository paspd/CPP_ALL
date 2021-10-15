#include "Bureaucrat.hpp"

int main()
{
	try
	{
		// Bureaucrat tooLow("tooLow", 200);
		// Bureaucrat tooHigh("tooHigh", -200);

	
		Bureaucrat Jhonny("Jhonny", 42);

		std::cout << Jhonny;
		std::cout << ++Jhonny;
		std::cout << Jhonny;
		std::cout << Jhonny++;
		std::cout << Jhonny;
		std::cout << std::endl;


		Bureaucrat Bobby("Bobby", 100);
		std::cout << Bobby;
		std::cout << --Bobby;
		std::cout << Bobby;
		std::cout << Bobby--;
		std::cout << Bobby;
		std::cout << std::endl;

	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}