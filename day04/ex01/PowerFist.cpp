#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power First", 8, 50)
{}

PowerFist::PowerFist(const PowerFist &other) : AWeapon(other.getName(), other.getAPCost(), other.getDamage())
{}

PowerFist &PowerFist::operator=(const PowerFist &other)
{
	this->name = other.getName();
	this->damage = other.getDamage();
	this->apCost = other.getAPCost();
	return (*this);
}

PowerFist::~PowerFist(void)
{}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
