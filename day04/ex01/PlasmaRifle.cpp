#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 21, 5)
{}

void	PlasmaRifle::attack(void)
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
