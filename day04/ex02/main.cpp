#include "Squad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main(void)
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	Squad *vlc = new Squad;
	Squad copy;
	vlc->push(bob);
	copy = *vlc;
	vlc->push(jim);
	std::cout << "--- First squad ---" << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	std::cout << "--- Second squad ---" << std::endl;
	for (int i = 0; i < copy.getCount(); ++i)
	{
		ISpaceMarine* cur = copy.getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	return (0);
}
