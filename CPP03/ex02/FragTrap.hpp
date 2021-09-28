#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &rhs);
	~FragTrap();

	FragTrap &operator=(FragTrap const &rhs);

	void highFivesGuys();
};

#endif