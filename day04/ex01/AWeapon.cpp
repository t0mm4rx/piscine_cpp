#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
				name(name), apcost(apcost), damage(damage)
{}

AWeapon::~AWeapon(void)
{}

int			AWeapon::getAPCost(void) const
{
	return (this->apcost);
}

std::string	AWeapon::getName(void) const
{
	return (this->name);
}

int			AWeapon::getDamage(void) const
{
	return (this->damage);
}

void		AWeapon::attack(void)
{}
