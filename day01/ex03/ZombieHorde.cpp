#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(std::string type, int n)
{
	this->n = n;
	this->type = type;
	this->zombies = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		this->zombies[i].setType(type);
		this->zombies[i].setName(this->randomName());
	}
}

ZombieHorde::~ZombieHorde(void)
{
	delete []this->zombies;
}

void ZombieHorde::announce(void)
{
	for (int i = 0; i < this->n; i++)
		this->zombies[i].announce();
}

Zombie *ZombieHorde::newZombie(std::string name)
{
    return (new Zombie(name, this->type));
}

std::string ZombieHorde::randomName(void)
{
    std::string names[] = {"Gabrielle", "Charlie", "Aimee", "Jacqueline", "Adele", "Marie", "Harris", "Jessie", "Calvin", "John"};

    return (names[rand() % 10]);
}
