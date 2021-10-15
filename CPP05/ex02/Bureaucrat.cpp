#include "Bureaucrat.hpp"

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return("Grade too low");
}

void	Bureaucrat::executeForm(Form const & form)
{
	try {
		form.execute(*this);
		std::cout << this->_name << " execute " << form.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << this->_name << " cannot execute because " << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(Form & form)
{
	try {
		form.beSigned(*this);
		std::cout << this->_name << " sign " << form.getName() << std::endl;
	}
	catch(const std::exception& e) {
		std::cout << this->_name << " cannot sign because " << e.what() << std::endl;
	}
	
}

int const &Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string const &Bureaucrat::getName() const
{
	return (this->_name);
}

Bureaucrat &Bureaucrat::operator++()
{
	if (this->_grade > 1)
		--this->_grade;
	return (*this);
}

Bureaucrat& Bureaucrat::operator--()
{
	if (this->_grade < 150)
		++this->_grade;
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat tmp = *this;
	if (this->_grade > 1)
		--this->_grade;
	return (tmp);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat tmp = *this;
	if (this->_grade < 150)
		++this->_grade;
	return (tmp);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
	return (o);
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &rhs)
{
	this->_name = rhs.getName();
	this->_grade = rhs.getGrade();
	return (*this);
}

Bureaucrat::Bureaucrat(Bureaucrat const &rhs): _name(rhs.getName()), _grade(rhs.getGrade())
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(): _name("Deafult")
{
	this->_grade = 150;
}

Bureaucrat::~Bureaucrat()
{
}