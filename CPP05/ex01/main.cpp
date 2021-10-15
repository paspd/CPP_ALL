#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		// Form tooLow("tooLow", 420, 150); //Exeption tooLow
		// Bureaucrat tooLow("tooLow", 200); //Exeption tooLow
		// Form tooHigh("tooHigh", -42, 150); //Exeption tooHigh
		// Bureaucrat tooHigh("tooHigh", -200); //Exeption tooHigh

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


		Form form("form", 50, 50);
		std::cout << form;
		std::cout << std::endl;


		Bobby.signForm(form);
		std::cout << form;
		std::cout << std::endl;


		Jhonny.signForm(form);
		std::cout << form;
		std::cout << std::endl;


		Jhonny.signForm(form);
		std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}