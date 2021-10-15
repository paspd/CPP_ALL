#include "Form.hpp"

const char *Form::FormAlreadySigned::what() const throw()
{
	return("Form already signed");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return("Grade too low");
}

void Form::beSigned(Bureaucrat const & bureaucrat)
{
	if (this->_signed)
		throw Form::FormAlreadySigned();
	else if (bureaucrat.getGrade() > this->_requiredGradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

std::string const & Form::getName() const
{
	return (this->_name);
}

int const & Form::getRequiredGradeExecute() const
{
	return (this->_requiredGradeExecute);
}

int const & Form::getRequiredGradeSign() const
{
	return (this->_requiredGradeSign);
}

bool const & Form::getSigned() const
{
	return (this->_signed);
}

std::ostream &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form \"" << rhs.getName() << "\": ";
	if (!rhs.getSigned())
		o << "not ";
	o << "signed, required Grade Execute = " << rhs.getRequiredGradeExecute() << ", required Grade Sign = " << rhs.getRequiredGradeSign() << std::endl;
	return (o);
}

Form::Form(std::string name, int requiredGradeExecute, int requiredGradeSign): _name(name), _signed(false), _requiredGradeExecute(requiredGradeExecute), _requiredGradeSign(requiredGradeSign)
{
	if (this->_requiredGradeExecute < 1 || this->_requiredGradeSign < 1)
		throw Form::GradeTooHighException();
	else if (this->_requiredGradeExecute > 150 || this->_requiredGradeSign > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const &rhs): _name(rhs._name), _signed(rhs._signed), _requiredGradeExecute(rhs._requiredGradeExecute), _requiredGradeSign(rhs._requiredGradeSign)
{
}

Form::Form(std::string name): _name(name), _signed(false), _requiredGradeExecute(150), _requiredGradeSign(150)
{
}

Form::Form(): _name("Default"), _signed(true), _requiredGradeExecute(150), _requiredGradeSign(150)
{
}

Form::~Form()
{
}