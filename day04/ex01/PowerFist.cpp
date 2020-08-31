#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power First", 8, 50)
{}

void	PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
