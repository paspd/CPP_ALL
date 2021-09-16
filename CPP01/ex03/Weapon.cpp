#include "Weapon.hpp"

void Weapon::setType(std::string type)
{
	this->type = type;
}

std::string const &Weapon::getType()
{
	return (this->type);
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}