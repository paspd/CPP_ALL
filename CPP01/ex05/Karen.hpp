#ifndef KAREN_HPP
#define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
private:
	void 	(Karen::*tab[4])(void);
	void	debug();
	void	info();
	void	warning();
	void	error();
public:
	void	complain(std::string level);
	Karen();
	~Karen();
};

#endif