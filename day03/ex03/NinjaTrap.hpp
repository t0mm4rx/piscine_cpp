#ifndef NinjaTrap_Hpp
#define NinjaTrap_Hpp

#include "ClapTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
				NinjaTrap(std::string name);
				~NinjaTrap(void);
		void	ninjaShoebox(ClapTrap &target);
};

#endif