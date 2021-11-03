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
	std::string _target;
public:

	class FormNotYetSigned : public std::exception
	{
		public:
			const char *what() const throw();
	};

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

	virtual void execute(Bureaucrat const & executor) const;
	void beSigned(Bureaucrat const & bureaucrat);

	void	setTarget(std::string const & target);

	std::string const & getTarget() const;
	std::string const & getName() const;
	int	const & getRequiredGradeExecute() const;
	int const & getRequiredGradeSign() const;
	bool const & getSigned() const;

	Form &operator=(Form const & rhs);

	Form(std::string name, int requiredGradeExecute, int requiredGradeSign);
	Form(Form const & rhs);
	Form(std::string name);
	Form();
	virtual ~Form();
};

std::ostream &operator<<(std::ostream &o, Form const &rhs);

#endif