#include "FragTrap.hpp"

int		main(void)
{
	FragTrap Bob("Bob");
	FragTrap Jhon("Jhon");
	FragTrap Bob_copy(Bob);
	std::cout << std::endl;

	Bob.attack("Tree");
	Bob_copy.attack("Tree");
	Jhon.attack("Bee");
	std::cout << std::endl;
	
	Jhon = Bob_copy;
	Jhon.attack("Table");
	std::cout << std::endl;

	Bob.beRepaired(20);
	Bob_copy.beRepaired(42);
	std::cout << std::endl;

	Bob.takeDamage(100);
	Bob_copy.takeDamage(18);
	Jhon.takeDamage(667);
	std::cout << std::endl;

	Bob.highFivesGuys();
	Bob_copy.highFivesGuys();
	Jhon.highFivesGuys();
	std::cout << std::endl;

	return(0);
}
