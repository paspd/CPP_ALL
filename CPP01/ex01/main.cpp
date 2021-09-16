#include "Zombie.hpp"

int main(void)
{
	int	hordeSize = 42;
	Zombie* horde = ZombieHorde(hordeSize, "Bob");
	for (int i = 0; i < hordeSize; i++)
	{
		std::cout << "Horde's Zombie n°" << i << " announce :";
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}