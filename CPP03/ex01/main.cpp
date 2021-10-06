#include "ScavTrap.hpp"

int		main(void)
{
	ScavTrap Bob("Bob");
	ScavTrap Jhon("Jhon");
	ScavTrap Bob_copy(Bob);
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

	Bob.guardGate();
	Bob_copy.guardGate();
	Jhon.guardGate();
	std::cout << std::endl;

	return(0);
}
