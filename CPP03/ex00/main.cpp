#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap Bob("Bob");
	ClapTrap Jhon("Jhon");
	ClapTrap Bob_copy(Bob);
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

	return(0);
}

