#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->hitPoints = 100;
	this->maxHit = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1.0;
	std::cout << "ClapTrap " << name << " spawned." << std::endl;
	this->name = name;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "ClapTrap " << name << " spawned." << std::endl;
	*this = other;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &other)
{
	this->hitPoints = other.hitPoints;
	this->maxHit = other.maxHit;
	this->energyPoints = other.energyPoints;
	this->maxEnergyPoints = other.maxEnergyPoints;
	this->name = other.name;
	this->meleeAttackDamage = other.meleeAttackDamage;
	this->rangedAttackDamage = other.rangedAttackDamage;
	this->armorDamageReduction = other.armorDamageReduction;
	this->level = other.level;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->name << " killed." << std::endl;
}

void		ClapTrap::takeDamage(unsigned int damage)
{
	damage -= this->armorDamageReduction;
	damage = (damage < 0 ? 0 : damage);
	this->hitPoints -= damage;
	this->hitPoints = (this->hitPoints < 0 ? 0 : this->hitPoints);
	std::cout << this->name << " took " << damage << " damages.";
	std::cout << " He has now " << this->hitPoints << " hit points." << std::endl;
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " has gained " << amount << " energy points." << std::endl;
	this->hitPoints += amount;
	this->hitPoints = (this->hitPoints > this->maxHit ? this->maxHit : this->hitPoints);
}

void		ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " uses a ranged attack against" << target << "." << std::endl;
}

void		ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " uses a melee attack against" << target << "." << std::endl;
}
