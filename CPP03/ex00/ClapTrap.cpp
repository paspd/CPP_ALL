#include "ClapTrap.hpp"

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " points of energy!" << std::endl; 
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl; 
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl; 
}

std::string ClapTrap::getName() const
{
	return (this->_name);
}

ClapTrap::ClapTrap(std::string _name): _name(_name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs): _name(rhs._name), _hitPoint(rhs._hitPoint), _energyPoint(rhs._energyPoint), _attackDamage(rhs._attackDamage)
{
	std::cout << "Constructor by copy called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}