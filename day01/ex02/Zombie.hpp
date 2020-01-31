#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		void announce(void);

	private:
		std::string type;
		std::string name;
};

#endif
