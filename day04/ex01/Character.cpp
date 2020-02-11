#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
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
	std::cout << this->name << " has " << this->ap << " and carries " << this->weapon->getName() << std::endl;
	this->weapon->attack();
	enemy->takeDamage(this->weapon->getDamage());
	this->ap -= 10;
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
    os << c.getName() << " has " << c.getAP() << " and ";
	if (c.getWeapon() == NULL)
		os << "is unarmed";
	else
		os << "carries " << c.getWeapon()->getName();
	os << std::endl;
	return (os);
}
