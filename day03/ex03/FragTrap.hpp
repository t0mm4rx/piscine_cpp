#ifndef FragTrap_Hpp
#define FragTrap_Hpp

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
				FragTrap(std::string name);
				~FragTrap(void);
		void	vaulthunter_dot_exe(std::string const &target);
};

#endif
