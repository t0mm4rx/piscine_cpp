#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap	alpha("Alpha");
	ScavTrap	lucie("Lucie");

	srand(time(0));
	alpha.meleeAttack("John");
	alpha.rangedAttack("Rose");
	alpha.vaulthunter_dot_exe("Micheal");
	alpha.ninjaShoebox(lucie);
	return (0);
}
