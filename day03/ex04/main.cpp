#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	srand(time(0));
	ScavTrap rose("Rose");
	FragTrap john("John");
	NinjaTrap ninja("Ninja");
	SuperTrap micheal("Micheal");

	rose.challengeNewcomer();
	rose.rangedAttack("John");
	ninja.ninjaShoebox(rose);
	john.meleeAttack("Rose");
	micheal.vaulthunter_dot_exe("John");
	micheal.ninjaShoebox(ninja);
	john.vaulthunter_dot_exe("Rose");

	return (0);
}
