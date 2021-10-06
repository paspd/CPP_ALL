#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &copy);
		~DiamondTrap();

		DiamondTrap	&operator=(DiamondTrap const &rhs);
		void		whoAmI();
		void		attack(std::string const &target);
	private:
		std::string	_name;
};

#endif