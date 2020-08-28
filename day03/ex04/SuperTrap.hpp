#ifndef SuperTrap_Hpp
#define SuperTrap_Hpp

#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
					SuperTrap(std::string name);
					~SuperTrap(void);
					SuperTrap(SuperTrap const &other);
		SuperTrap	&operator=(SuperTrap const &other);
		void		meleeAttack(std::string const &arget);
		void		rangedAttack(std::string const &target);
};

#endif
