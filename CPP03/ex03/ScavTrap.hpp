#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
#include "iostream"

class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &copy);
		~ScavTrap();

		ScavTrap	&operator=(ScavTrap const &rhs);
		void		attack(std::string const &target);
		void		guardGate(void) const;
};

#endif