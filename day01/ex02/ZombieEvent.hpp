#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
    	std::string type;
    	Zombie *newZombie(std::string name);
    	Zombie *randomChump(void);

};

#endif
