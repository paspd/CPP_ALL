#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

const char *Intern::FormNotFind::what() const throw()
{
	return("Form not find");
}

Form *Intern::makeForm(std::string type, std::string target)
{
	std::string type_tab[3] = {"shurubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (type == type_tab[i])
			return ((this->*_creationFormTab[i])(target));
	}
	throw Intern::FormNotFind();
}

Form *Intern::makeTreeForm(std::string target)
{
	std::cout << "Intern creates shrubbery creation form." << std::endl;
	Form *tmp = new ShrubberyCreationForm(target);
	return (tmp);
}

Form *Intern::makeRobotForm(std::string target)
{
	std::cout << "Intern creates robotomy request form." << std::endl;
	Form *tmp = new RobotomyRequestForm(target);
	return (tmp);
}

Form *Intern::makePresidentForm(std::string target)
{
	std::cout << "Intern creates presidential pardon form." << std::endl;
	Form *tmp = new PresidentialPardonForm(target);
	return (tmp);
}

Intern::Intern()
{
	this->_creationFormTab[0] = &Intern::makeTreeForm;
	this->_creationFormTab[1] = &Intern::makeRobotForm;
	this->_creationFormTab[2] = &Intern::makePresidentForm;
}

Intern::~Intern()
{
}