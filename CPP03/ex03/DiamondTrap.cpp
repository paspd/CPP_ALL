#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default")
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	this->_name = "default";
	std:: cout << "Default DiamondTrap constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << this->_name << " created" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy)
{
	std::cout << "Copy DiamondTrap constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs)
{
	ClapTrap::_name = rhs.ClapTrap::_name;
	this->_name = rhs._name;
	this->_hitPoints = rhs.FragTrap::_hitPoints;
	this->_energyPoints = rhs.ScavTrap::_energyPoints;
	this->_attackDamage = rhs.FragTrap::_attackDamage;
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name = " << this->_name << std::endl;
	std::cout << "ClapTrap name = " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}