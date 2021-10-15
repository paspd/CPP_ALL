#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getRequiredGradeExecute())
		throw Form::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotYetSigned();
	std::cout << "\"" << this->getTarget() << "\" has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & rhs): Form(rhs)
{
	this->setTarget(rhs.getTarget());
}

PresidentialPardonForm::PresidentialPardonForm(std::string const & target): Form("PresidentialPardonForm", 45, 72)
{
	this->setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 45, 72)
{
	this->setTarget("Default");
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}