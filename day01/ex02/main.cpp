#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
	srand(time(0));
    Zombie *zombie;
    ZombieEvent event;

    event.type = "evil";
    zombie = event.randomChump();
    zombie->announce();
	delete zombie;
    zombie = event.randomChump();
    zombie->announce();
	delete zombie;
    zombie = event.randomChump();
    zombie->announce();
    delete zombie;
    event.type = "good";
    zombie = event.randomChump();
    zombie->announce();
    delete zombie;
    zombie = event.randomChump();
    zombie->announce();
    delete zombie;
    zombie = event.randomChump();
    zombie->announce();
    delete zombie;
    return (0);
}
