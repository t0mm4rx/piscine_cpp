#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->name = name;
}

ClapTrap::~ClapTrap(void)
{}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with a bow, causing " << this->rangedAttackDamage << " damages." << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with an axe, causing " << this->meleeAttackDamage << " damages." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int damage)
{
	std::cout << this->name << " took " << damage - this->armorDamageReduction << " damages." << std::endl;
	this->hitPoints -= damage + this->armorDamageReduction;
	this->hitPoints = (this->hitPoints < 0 ? 0 : this->hitPoints);
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " has gained " << amount << " energy points." << std::endl;
	this->hitPoints += amount;
	this->hitPoints = (this->hitPoints > this->maxHit ? this->maxHit : this->hitPoints);
}

std::string	ClapTrap::getName(void)
{
	return (this->name);
}
