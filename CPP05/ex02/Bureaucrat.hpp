#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <fstream>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	std::string _name;
	int _grade;
public:
	class GradeTooHighException : public std::exception
	{
		public:
			const char *what() const throw();
	};
	
	class GradeTooLowException : public std::exception
	{
		public:
			const char *what() const throw();
	};

	void	executeForm(Form const & form);
	void	signForm(Form & form);

	int const &getGrade() const;
	std::string const &getName() const;

	Bureaucrat &operator++();
	Bureaucrat &operator--();
	Bureaucrat operator++(int);
	Bureaucrat operator--(int);

	Bureaucrat &operator=(Bureaucrat const & rhs);

	Bureaucrat(std::string name, int grade);
	Bureaucrat(Bureaucrat const & rhs);
	Bureaucrat();
	~Bureaucrat();
};

std::ostream &operator<<(std::ostream & o, Bureaucrat const &rhs);

#endif