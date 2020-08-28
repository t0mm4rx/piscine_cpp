#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->hitPoints = 100;
	this->maxHit = 100;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1.0;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	std::cout << this->name << ": I'm a SuperTrap!" << std::endl;
}

SuperTrap::SuperTrap(SuperTrap const &other) : ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	std::cout << this->name << ": I'm a SuperTrap!" << std::endl;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &other)
{
	(void)other;
	std::cout << this->name << ": I'm a SuperTrap!" << std::endl;
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
