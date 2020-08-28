#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
	this->level = 1.0;
	std::cout << this->name << ": Hey ! At your service." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << this->name << ": Hey ! At your service." << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	std::cout << this->name << ": Hey ! At your service." << std::endl;
	return (*this);
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

void		ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with a plastic rocket launcher, causing " << this->rangedAttackDamage << " damages." << std::endl;
}

void		ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with an screwdriver, causing " << this->meleeAttackDamage << " damages." << std::endl;
}
