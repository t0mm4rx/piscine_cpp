#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 60;
	this->maxHit = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
	this->level = 1.0;
	std::cout << this->name << ": IIAAAA ! I'm a ninja !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << this->name << ": I thought ninja were invicible..." << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << this->name << " used a secret and special ninja attack on " << target.getName() << " !" <<std::endl;
}
