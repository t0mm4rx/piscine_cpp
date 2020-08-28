#include "FragTrap.hpp"

int main(void)
{
	srand(time(0));
	FragTrap john("John");
	FragTrap micheal("Micheal");
	FragTrap john2 = john;
	FragTrap micheal2(micheal);

	john2.meleeAttack("Rose");
	john.rangedAttack("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	john.vaulthunter_dot_exe("Micheal");
	micheal2.rangedAttack("Rose");
	micheal.vaulthunter_dot_exe("John");
	micheal.takeDamage(30);
	micheal.meleeAttack("John");
	john.takeDamage(20);

	return (0);
}
