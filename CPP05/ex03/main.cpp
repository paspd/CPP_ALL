#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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


		Bureaucrat Bobby("Bobby", 150);
		std::cout << Bobby;
		std::cout << --Bobby;
		std::cout << Bobby;
		std::cout << Bobby--;
		std::cout << Bobby;
		std::cout << std::endl;

		Intern intern;

		// Form *fail = intern.makeForm("robotomy requesta", "ok");
		// std::cout << fail;

		Form *robot = intern.makeForm("robotomy request", "ok");
		std::cout << *robot;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}