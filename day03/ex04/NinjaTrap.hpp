#ifndef NinjaTrap_Hpp
#define NinjaTrap_Hpp

#include "ClapTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
	public:
					NinjaTrap(std::string name);
					~NinjaTrap(void);
					NinjaTrap(NinjaTrap const &other);
		NinjaTrap	&operator=(NinjaTrap const &other);
		void		ninjaShoebox(ClapTrap &target);
		void		meleeAttack(std::string const &arget);
		void		rangedAttack(std::string const &target);
};

#endif
