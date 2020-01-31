#include "ZombieEvent.hpp"

Zombie *ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, this->type));
}

Zombie *ZombieEvent::randomChump(void)
{
    std::string names[] = {"Gabrielle", "Charlie", "Aimee", "Jacqueline", "Adele", "Marie", "Harris", "Jessie", "Calvin", "John"};

    if (this->type == "")
        this->type = "NoType";
    return (this->newZombie(names[rand() % 10]));
}
