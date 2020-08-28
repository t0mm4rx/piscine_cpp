#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
	this->level = 1.0;
	std::cout << this->name << ": Hi ! I'm ready !" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << this->name << ": Hi ! I'm ready !" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	(void)other;
	std::cout << this->name << ": Hi ! I'm ready !" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << this->name << ": Oh no, I died :(" << std::endl;
}

void		FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	int			choice;
	std::string	tool;

	if (this->energyPoints < 25)
	{
		std::cout << this->name << " tried to use vaulthunter_dot_exe but doesn't have enough energy !" << std::endl;
		return ;
	}
	this->energyPoints -= 25;
	choice = rand() % 5;
	switch (choice) {
		case 0:
			tool = "a shovel";
			break;
		case 1:
			tool = "a keyboard";
			break;
		case 2:
			tool = "a glass of beer";
			break;
		case 3:
			tool = "an avocado";
			break;
		case 4:
			tool = "a cup of coffee";
			break;
	}
	std::cout << this->name << " attacked " << target << " with " << tool << std::endl;
}

void		FragTrap::rangedAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with a bow, causing " << this->rangedAttackDamage << " damages." << std::endl;
}

void		FragTrap::meleeAttack(std::string const &target)
{
	std::cout << this->name << " attacked " << target << " with an axe, causing " << this->meleeAttackDamage << " damages." << std::endl;
}
