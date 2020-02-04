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
	std::cout << this->name << ": Hey !" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->name << ": Bye..." << std::endl;
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
	std::cout << this->name << " took " << damage - this->armorDamageReduction << " damages." << std::endl;
	this->hitPoints -= damage + this->armorDamageReduction;
	this->hitPoints = (this->hitPoints < 0 ? 0 : this->hitPoints);
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
			challenge = "do the ice bucket challenge";
			break;
		case 1:
			challenge = "do a backflip";
			break;
		case 2:
			challenge = "eat an insect";
			break;
		case 3:
			challenge = "walk 5 meters on your hands";
			break;
		case 4:
			challenge = "make me a coffee";
			break;
	}
	std::cout << this->name << ": Hey, I have a challenge for you: " << challenge << std::endl;
}
