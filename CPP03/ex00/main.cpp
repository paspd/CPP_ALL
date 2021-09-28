#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap Default;
	ClapTrap Bob("Bob");
	ClapTrap Bob_copy(Bob);
	ClapTrap Bob_assignation;
	std::cout << std::endl;

	Bob_assignation = Bob;
	std::cout << std::endl;
	
	Default.attack("Bob");
	Bob.attack("Tree");
	Bob_assignation.attack("Bee");
	std::cout << std::endl;

	Bob.beRepaired(20);
	Bob_copy.beRepaired(42);
	std::cout << std::endl;

	return(0);
}

