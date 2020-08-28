#ifndef ScavTrap_Hpp
#define ScavTrap_Hpp

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
					ScavTrap(std::string name);
					~ScavTrap(void);
					ScavTrap(ScavTrap const &other);
		ScavTrap	&operator=(ScavTrap const &other);
		void		challengeNewcomer(void);
		void		meleeAttack(std::string const &target);
		void		rangedAttack(std::string const &target);
};

#endif
