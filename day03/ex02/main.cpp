#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	srand(time(0));
	ScavTrap rose("Rose");
	FragTrap john("John");
	FragTrap john2 = john;
	ScavTrap rose2(rose);

	rose.challengeNewcomer();
	rose2.meleeAttack("Micheal");
	rose.rangedAttack("John");
	john.meleeAttack("Rose");
	john2.rangedAttack("Micheal");
	john.vaulthunter_dot_exe("Rose");

	return (0);
}
