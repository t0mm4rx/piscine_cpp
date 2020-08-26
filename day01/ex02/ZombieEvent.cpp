#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
	return (new Zombie(name, this->type));
}

Zombie *ZombieEvent::randomChump(void)
{
	std::string names[] = {"Gabrielle", "Charlie", "Aimée", "Jacqueline", "Adele", "Marie", "Harris", "Jessie", "Calvin", "John", "Jordan"};

	if (this->type == "")
		this->type = "NoType";
	return (this->newZombie(names[rand() % 11]));
}

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}
