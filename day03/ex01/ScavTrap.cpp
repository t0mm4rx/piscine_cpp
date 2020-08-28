#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->hitPoints = 100;
	this->maxHit = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->name = name;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->level = 1.0;
	std::cout << this->name << ": Hey ! At your service." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
	*this = other;
	std::cout << this->name << ": Hey ! At your service." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << ": Bye..." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with a plastic rocket launcher, causing " << this->rangedAttackDamage << " damages." << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with an screwdriver, causing " << this->meleeAttackDamage << " damages." << std::endl;
}

void		ScavTrap::takeDamage(unsigned int damage)
{
	damage -= this->armorDamageReduction;
	damage = (damage < 0 ? 0 : damage);
	this->hitPoints -= damage;
	this->hitPoints = (this->hitPoints < 0 ? 0 : this->hitPoints);
	std::cout << this->name << " took " << damage << " damages.";
	std::cout << " He has now " << this->hitPoints << " hit points." << std::endl;
}

void		ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << this->name << " has gained " << amount << " energy points." << std::endl;
	this->hitPoints += amount;
	this->hitPoints = (this->hitPoints > this->maxHit ? this->maxHit : this->hitPoints);
}

void		ScavTrap::challengeNewcomer(void)
{
	int			choice;
	std::string	challenge;

	choice = rand() % 5;
	switch (choice) {
		case 0:
			challenge = "jump off the 20th floor";
			break;
		case 1:
			challenge = "do a backflip";
			break;
		case 2:
			challenge = "eat an spider";
			break;
		case 3:
			challenge = "walk 5 meters on your hands";
			break;
		case 4:
			challenge = "make me a coffee";
			break;
	}
	std::cout << this->name << ": I have a challenge for you: " << challenge << std::endl;
}
