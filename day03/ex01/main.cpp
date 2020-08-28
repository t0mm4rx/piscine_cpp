#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	srand(time(0));
	FragTrap john("John");
	FragTrap micheal("Micheal");
	ScavTrap rose("Rose");

	rose.challengeNewcomer();
	john.rangedAttack("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	rose.challengeNewcomer();
	micheal.vaulthunter_dot_exe("John");
	micheal.takeDamage(30);
	micheal.meleeAttack("John");
	john.takeDamage(20);

	return (0);
}
