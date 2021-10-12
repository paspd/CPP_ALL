#include "Zombie.hpp"

void Zombie::announce()
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
	this->_name = name;
	return ;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ": Destroy" << std::endl;
	return ;
}