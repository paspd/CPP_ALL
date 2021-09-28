#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap Default;
	std::cout << std::endl;
	ScavTrap Bob("Bob");
	std::cout << std::endl;
	ScavTrap Bob_copy(Bob);
	std::cout << std::endl;
	ScavTrap Bob_assignation;
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

	Default.guardGate();
	Bob.guardGate();
	Bob_copy.guardGate();
	Bob_assignation.guardGate();
	std::cout << std::endl;

	return(0);
}

