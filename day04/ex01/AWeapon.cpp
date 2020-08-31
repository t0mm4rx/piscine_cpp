#include "AWeapon.hpp"

AWeapon::AWeapon(const std::string &name, int apCost, int damage) :
				name(name), apCost(apCost), damage(damage)
{}

AWeapon::AWeapon(const AWeapon &other)
{
	*this = other;
}

AWeapon &AWeapon::operator=(const AWeapon &other)
{
	this->name = other.name;
	this->apCost = other.apCost;
	this->damage = other.damage;
	return (*this);
}

AWeapon::~AWeapon(void)
{}

int			AWeapon::getAPCost(void) const
{
	return (this->apCost);
}

std::string	AWeapon::getName(void) const
{
	return (this->name);
}

int			AWeapon::getDamage(void) const
{
	return (this->damage);
}
