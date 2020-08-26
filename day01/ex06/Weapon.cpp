#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

std::string Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
