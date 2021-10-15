#include "ShrubberyCreationForm.hpp"

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getRequiredGradeExecute())
		throw Form::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotYetSigned();
	std::ofstream ofs;

	ofs.open(this->getTarget() + "_shrubbery");

	ofs << "                                             🐦           ." << std::endl;
	ofs << "                                              .         ;  " << std::endl;
	ofs << "                 .              .              ;%     ;;   " << std::endl;
	ofs << "                   ,           ,🍎              🍎:;%  %;   " << std::endl;
	ofs << "           🐦        :         ;                   :;%;'     .," << std::endl;   
	ofs << "           ,.        %;     %;            ;        %;'    ,;" << std::endl;
	ofs << "             ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl;
	ofs << "            🍎 %;       %;%;      ,  ;🍎     %;  ;%; 🍎 ,%;' " << std::endl;
	ofs << "               ;%;     🍎%;        ;%;        % ;%;  ,%;'" << std::endl;
	ofs << "                `%;.     ;%;     %;'      🐦  `;%%;.%;'" << std::endl;
	ofs << "                 `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl;
	ofs << "                    `:%;.  :;bd%;🍎         %;@%;'" << std::endl;
	ofs << "                      `@%:.  :;%.         ;@@%;'   " << std::endl;
	ofs << "                        `@%.  `;@%.      ;@@%;         " << std::endl;
	ofs << "                          `@%%. `@%%    ;@@%;        " << std::endl;
	ofs << "                            ;@%. :@%%  %@@%;       " << std::endl;
	ofs << "                              %@bd%%%bd%%:;     " << std::endl;
	ofs << "                                #@%%%%%:;;" << std::endl;
	ofs << "                                %@@%%%::;" << std::endl;
	ofs << "            |                   %@@@%(o);  . '         " << std::endl;
	ofs << "                               %@@@o%;:(.,'         " << std::endl;
	ofs << "             |              `.. %@@@o%::;         " << std::endl;
	ofs << "                               `)@@@o%::;         " << std::endl;
	ofs << "            |                   %@@(o)::;        " << std::endl;
	ofs << "            🍎                  .%@@@@%::;         " << std::endl;
	ofs << "                               ;%@@@@%::;.          " << std::endl;
	ofs << "                              ;%@@@@%%:;;;. " << std::endl;
	ofs << "                          ...;%@@@@@%%:;;;;,.." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & rhs): Form(rhs)
{
	this->setTarget(rhs.getTarget());
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target): Form("ShrubberyCreationForm", 137, 145)
{
	this->setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 137, 145)
{
	this->setTarget("Default");
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}