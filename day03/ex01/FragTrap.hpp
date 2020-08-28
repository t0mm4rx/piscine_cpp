#ifndef FragTrap_hpp
#define FragTrap_hpp

#include <iostream>
#include <stdlib.h>

class FragTrap {
	private:
		int			hitPoints;
		int			maxHit;
		int			energyPoints;
		int			maxEnergyPoints;
		float		level;
		std::string	name;
		int			meleeAttackDamage;
		int			rangedAttackDamage;
		int			armorDamageReduction;
	public:
					FragTrap(std::string name);
					FragTrap(FragTrap const &other);
					~FragTrap(void);
		FragTrap	&operator=(FragTrap const &other);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		vaulthunter_dot_exe(std::string const &target);
};

#endif
