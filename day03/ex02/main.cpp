#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	srand(time(0));
	ScavTrap rose("Rose");
	FragTrap john("John");

	rose.challengeNewcomer();
	rose.rangedAttack("John");
	john.meleeAttack("Rose");
	john.vaulthunter_dot_exe("Rose");

	return (0);
}
