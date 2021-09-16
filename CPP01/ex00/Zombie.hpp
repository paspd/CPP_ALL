#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <iomanip>
#include <string>

class Zombie
{
	public:
		void announce();
		Zombie(std::string name);
		~Zombie(void);
	private:
		std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);


#endif