#include "Character.hpp"

Character::Character(const std::string &name) : name(name)
{
	this->ap = 40;
	this->weapon = NULL;
}

Character::~Character(void)
{
}

void		Character::equip(AWeapon *weapon)
{
	this->weapon = weapon;
}

void		Character::recoverAP(void)
{
	this->ap += 10;
	this->ap = (this->ap > 40 ? 40 : this->ap);
	std::cout << this->name << " has rested, he has now " << this->ap << " AP" << std::endl;
}

std::string	Character::getName(void) const
{
	return (this->name);
}

void		Character::attack(Enemy *enemy)
{
	if (this->ap == 0)
	{
		std::cout << "No AP, cannot attack" << std::endl;
		return ;
	}
	if (this->weapon == NULL)
	{
		std::cout << "No weapon, cannot attack" << std::endl;
		return ;
	}
	std::cout << this->name << " attack " << enemy->getType() << " with a " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	this->ap -= this->weapon->getAPCost();
	this->ap = (this->ap < 0 ? 0 : this->ap);
	if (enemy->getHP() <= 0)
		delete enemy;
}

int			Character::getAP(void) const
{
	return (this->ap);
}

AWeapon		*Character::getWeapon(void) const
{
	return (this->weapon);
}

std::ostream& operator<<(std::ostream& os, const Character& c)
{
	(void) c;
    os << c.getName() << " has " << c.getAP() << " AP and ";
	if (c.getWeapon() == NULL)
		os << "is unarmed";
	else
		os << "carries " << c.getWeapon()->getName();
	os << std::endl;
	return (os);
}
