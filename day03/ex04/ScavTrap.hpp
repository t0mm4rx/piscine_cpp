#ifndef ScavTrap_Hpp
#define ScavTrap_Hpp

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
				ScavTrap(std::string name);
				~ScavTrap(void);
		void	challengeNewcomer(void);

};

#endif
