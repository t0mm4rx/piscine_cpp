#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->hitPoints = FragTrap::hitPoints;
	this->maxHit = FragTrap::maxHit;
	this->energyPoints = NinjaTrap::energyPoints;
	this->maxEnergyPoints = NinjaTrap::maxEnergyPoints;
	this->level = 1.0;
	this->meleeAttackDamage = NinjaTrap::meleeAttackDamage;
	this->rangedAttackDamage = FragTrap::rangedAttackDamage;
	this->armorDamageReduction = FragTrap::armorDamageReduction;
	std::cout << this->name << ": I'm a SuperTrap!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	*this = other;
	std::cout << this->name << ": I'm a SuperTrap!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &other)
{
	(void)other;
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << this->name <<  ": I'm not that super..." << std::endl;
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const &target)
{
	NinjaTrap::meleeAttack(target);
}
