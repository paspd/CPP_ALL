#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
	public:
		void announce();
		void setName(std::string name);
		Zombie();
		~Zombie(void);
	private:
		std::string name;
};

Zombie* ZombieHorde(int N, std::string name);

#endif