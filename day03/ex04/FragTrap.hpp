#ifndef FragTrap_Hpp
#define FragTrap_Hpp

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	public:
					FragTrap(std::string name);
					~FragTrap(void);
					FragTrap(FragTrap const &other);
		FragTrap	&operator=(FragTrap const &other);
		void		vaulthunter_dot_exe(std::string const &target);
		void		meleeAttack(std::string const &arget);
		void		rangedAttack(std::string const &target);
};

#endif
