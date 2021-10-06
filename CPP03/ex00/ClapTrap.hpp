#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string _name;
	int _hitPoint;
	int _energyPoint;
	int _attackDamage;
public:
	ClapTrap(std::string _name);
	ClapTrap(const ClapTrap& rhs);
	~ClapTrap();

	ClapTrap &operator=(ClapTrap const &rhs);

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	std::string getName() const;
	int getHitPoint() const;
	int getEnergyPoint() const;
	int getAttackDamage() const;

	void setName(std::string name);
	void setHitPoint(int hitPoint);
	void setEnergyPoint(int energyPoint);
	void setAttackDamage(int attackDamage);

};

#endif