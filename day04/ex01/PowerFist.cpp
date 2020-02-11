#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power First", 50, 8)
{}

void	PowerFist::attack(void)
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
