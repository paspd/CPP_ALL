#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern
{
private:
	Form *(Intern::*_creationFormTab[3])(std::string target);
public:
	class FormNotFind : public std::exception
	{
		public:
			const char *what() const throw();
	};

	Form *makeTreeForm(std::string target);
	Form *makeRobotForm(std::string target);
	Form *makePresidentForm(std::string target);

	Form *makeForm(std::string type, std::string target);

	Intern(/* args */);
	~Intern();
};

#endif