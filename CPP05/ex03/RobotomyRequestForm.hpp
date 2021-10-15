#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	/* data */
public:
	virtual void execute(Bureaucrat const & executor) const;

	RobotomyRequestForm(RobotomyRequestForm const &rhs);
	RobotomyRequestForm(std::string const & target);
	RobotomyRequestForm(/* args */);
	virtual ~RobotomyRequestForm();
};

#endif