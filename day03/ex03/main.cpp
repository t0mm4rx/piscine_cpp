#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	srand(time(0));
	ScavTrap rose("Rose");
	FragTrap john("John");
	NinjaTrap ninja("Ninja");

	rose.challengeNewcomer();
	rose.rangedAttack("John");
	ninja.ninjaShoebox(rose);
	john.meleeAttack("Rose");
	john.vaulthunter_dot_exe("Rose");

	return (0);
}
