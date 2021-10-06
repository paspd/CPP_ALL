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


// ~~~~~~~~~~GET~~~~~~~~~~~

std::string ClapTrap::getName() const
{
	return (this->_name);
}

int	ClapTrap::getHitPoint() const
{
	return (this->_hitPoint);
}

int	ClapTrap::getEnergyPoint() const
{
	return (this->_energyPoint);
}

int	ClapTrap::getAttackDamage() const
{
	return (this->_attackDamage);
}

// ~~~~~~~~~~SET~~~~~~~~~~~

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoint(int hitPoint)
{
	this->_hitPoint = hitPoint;
}

void ClapTrap::setEnergyPoint(int energyPoint)
{
	this->_energyPoint = energyPoint;
}

void	ClapTrap::setAttackDamage(int attackDamage)
{
	this->_attackDamage = attackDamage;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
	this->_name = rhs._name;
	this->_hitPoint = rhs._hitPoint;
	this->_energyPoint = rhs._energyPoint;
	this->_attackDamage = rhs._attackDamage;
	std::cout << "ClapTrap asignation opperator called" << std::endl;
	return (*this);
}

ClapTrap::ClapTrap(std::string _name): _name(_name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& rhs): _name(rhs._name), _hitPoint(rhs._hitPoint), _energyPoint(rhs._energyPoint), _attackDamage(rhs._attackDamage)
{
	std::cout << "ClapTrap constructor by copy called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}