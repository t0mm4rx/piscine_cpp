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
	return ;
}
