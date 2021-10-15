#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string _name;
	bool _signed;
	const int _requiredGradeExecute;
	const int _requiredGradeSign;
public:

	class FormAlreadySigned : public std::exception
	{
		public:
			const char *what() const throw();
	};

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

	void beSigned(Bureaucrat const & bureaucrat);

	std::string const & getName() const;
	int	const & getRequiredGradeExecute() const;
	int const & getRequiredGradeSign() const;
	bool const & getSigned() const;

	Form(std::string name, int requiredGradeExecute, int requiredGradeSign);
	Form(Form const & rhs);
	Form(std::string name);
	Form();
	~Form();
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif