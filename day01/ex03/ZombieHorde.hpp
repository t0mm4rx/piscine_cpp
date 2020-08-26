#ifndef ZOMBIEHORDEHPP
# define ZOMBIEHORDEHPP

#include "Zombie.hpp"

class ZombieHorde
{
	public:
					ZombieHorde(std::string type, int n);
					~ZombieHorde(void);
		Zombie		*newZombie(std::string name);
		void		announce();
		Zombie		*zombies;
	private:
		int			n;
		std::string	type;
		std::string	randomName(void);
};

#endif
