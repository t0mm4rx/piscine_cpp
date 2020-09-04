#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &other) : Enemy(other.getHP(), other.getType())
{}

SuperMutant &SuperMutant::operator=(const SuperMutant &other)
{
	this->type = other.getType();
	this->hp = other.getHP();
	return (*this);
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

void SuperMutant::takeDamage(int damage)
{
	(void)damage;
	this->hp -= 3;
	this->hp = (this->hp < 0 ? 0 : this->hp);
	std::cout << this->hp << " HP remaining for " << this->type << std::endl;
}
