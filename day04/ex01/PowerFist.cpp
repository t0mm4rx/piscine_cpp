#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power First", 8, 50)
{}

PowerFist::~PowerFist(void)
{}

void PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
