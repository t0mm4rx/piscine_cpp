#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
	srand(time(0));
	ZombieHorde *horde_good;
	ZombieHorde *horde_evil;

	horde_good = new ZombieHorde("good", 5);
	horde_evil = new ZombieHorde("evil", 10);
	std::cout << "Good type:" << std::endl;
	horde_good->announce();
	std::cout << "Evil type:" << std::endl;
	horde_evil->announce();
	delete horde_evil;
	delete horde_good;
}
