#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <stdlib.h>

class Zombie
{
	public:
		Zombie(std::string name, std::string type);
		Zombie();
		void announce(void);
		void setType(std::string type);
		void setName(std::string name);

	private:
		std::string type;
		std::string name;
};

#endif
