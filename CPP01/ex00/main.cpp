#include "Zombie.hpp"

#include "Zombie.hpp"

int main(void)
{
	Zombie bob("Bob");
	bob.announce();

	Zombie* frank = newZombie("Frank");

	randomChump("Bobby");

	delete frank;
	return (0);
}