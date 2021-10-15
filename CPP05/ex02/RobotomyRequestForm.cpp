#include "RobotomyRequestForm.hpp"

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getRequiredGradeExecute())
		throw Form::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotYetSigned();
	if (std::rand() % 2)
		std::cout << "Conratulation, \"" << this->getTarget() << "\" has been robotomized successfully !" << std::endl;
	else
		std::cout << "Ooops, \"" << this->getTarget() << "\" has'nt been robotomized." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & rhs): Form(rhs)
{
	this->setTarget(rhs.getTarget());
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target): Form("RobotomyRequestForm", 45, 72)
{
	this->setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 45, 72)
{
	this->setTarget("Default");
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}