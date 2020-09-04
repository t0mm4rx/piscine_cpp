#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &other) : AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{}

PlasmaRifle &PlasmaRifle::operator=(const PlasmaRifle &other)
{
	this->name = other.getName();
	this->apCost = other.getAPCost();
	this->damage = other.getDamage();
	return (*this);
}

PlasmaRifle::~PlasmaRifle(void)
{}

void PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
