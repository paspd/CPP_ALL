#include "FragTrap.hpp"

int		main(void)
{
	FragTrap Default;
	FragTrap Bob("Bob");
	FragTrap Bob_copy(Bob);
	FragTrap Bob_assignation;
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

	Default.highFivesGuys();
	Bob.highFivesGuys();
	Bob_copy.highFivesGuys();
	Bob_assignation.highFivesGuys();
	std::cout << std::endl;

	return(0);
}

