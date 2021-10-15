#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	/* data */
public:
	virtual void execute(Bureaucrat const & executor) const;

	ShrubberyCreationForm(ShrubberyCreationForm const &rhs);
	ShrubberyCreationForm(std::string const & target);
	ShrubberyCreationForm(/* args */);
	virtual ~ShrubberyCreationForm();
};

#endif