#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

void	SuperMutant::takeDamage(int damage)
{
	(void)damage;
	this->hp -= 3;
	this->hp = (this->hp < 0 ? 0 : this->hp);
}
