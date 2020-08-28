#ifndef ScavTrap_hpp
#define ScavTrap_hpp

#include <iostream>
#include <stdlib.h>

class ScavTrap {
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
					ScavTrap(std::string name);
					ScavTrap(ScavTrap const &other);
					~ScavTrap(void);
		ScavTrap	&operator=(ScavTrap const &other);
		void		rangedAttack(std::string const &target);
		void		meleeAttack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		challengeNewcomer(void);
};

#endif
