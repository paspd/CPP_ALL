#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	/* data */
public:
	virtual void execute(Bureaucrat const & executor) const;

	PresidentialPardonForm(PresidentialPardonForm const &rhs);
	PresidentialPardonForm(std::string const & target);
	PresidentialPardonForm(/* args */);
	virtual ~PresidentialPardonForm();
};

#endif