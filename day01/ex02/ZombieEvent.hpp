#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <string>
# include <cstdlib>
# include "Zombie.hpp"

class ZombieEvent
{
	public:
		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		Zombie		*randomChump(void);
	private:
		std::string	type;
};

#endif
