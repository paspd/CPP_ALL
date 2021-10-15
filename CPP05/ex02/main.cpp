#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

		Form *tree = new ShrubberyCreationForm("House");
		std::cout << *tree;
		std::cout << std::endl;
		
		Jhonny.executeForm(*tree);
		std::cout << std::endl;

		Jhonny.signForm(*tree);
		Jhonny.executeForm(*tree);
		std::cout << std::endl;

		Bobby.executeForm(*tree);
		std::cout << std::endl;
		delete tree;

		Form *robot = new RobotomyRequestForm("Santa Claus");
		std::cout << *robot;
		std::cout << std::endl;
		
		Jhonny.executeForm(*robot);
		std::cout << std::endl;

		Jhonny.signForm(*robot);
		Jhonny.executeForm(*robot);
		std::cout << std::endl;

		Bobby.executeForm(*robot);
		std::cout << std::endl;
		delete robot;

		Form *president = new PresidentialPardonForm("Tintin");
		std::cout << *president;
		std::cout << std::endl;
		
		Jhonny.executeForm(*president);
		std::cout << std::endl;

		Jhonny.signForm(*president);
		Jhonny.executeForm(*president);
		std::cout << std::endl;

		Bobby.executeForm(*president);
		std::cout << std::endl;
		delete president;

	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}