#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->maxHit = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
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
