#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void	fight(Zombie *tall[10], Zombie *small[10])
{
	int	actions;
	int zombieIndex;

	actions = 5 + rand() % 5;
	for (int i = 0; i < actions; i++)
	{
		zombieIndex = rand() % 10;
		if (rand() % 2 == 1)
			tall[zombieIndex]->announce();
		else
			small[zombieIndex]->announce();
	}
}

void	king(void)
{
	Zombie king("Tom", "King");

	king.announce();
}

int		main(void)
{
	Zombie		*tallZombies[10];
	Zombie		*smallZombies[10];
	ZombieEvent	talls;
	ZombieEvent	smalls;

	srand(time(0));
	talls.setZombieType("Tall");
	smalls.setZombieType("Small");
	std::cout << "Creating zombies." << std::endl;
	for (int i = 0; i < 10; i++)
	{
		tallZombies[i] = talls.randomChump();
		smallZombies[i] = smalls.randomChump();
	}
	std::cout << std::endl << "First fight begins." << std::endl;
	fight(tallZombies, smallZombies);
	std::cout << std::endl << "King is entering the fight." << std::endl;
	king();
	std::cout << std::endl <<  "Second fight begins." << std::endl;
	fight(tallZombies, smallZombies);
	std::cout << std::endl << "Killing zombies." << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete tallZombies[i];
		delete smallZombies[i];
	}
	return (0);
}
