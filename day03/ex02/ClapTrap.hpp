#ifndef ClapTrap_Hpp
#define ClapTrap_Hpp

#include <string>
#include <iostream>

class ClapTrap
{
	protected:
		int				hitPoints;
		int				maxHit;
		int				energyPoints;
		int				maxEnergyPoints;
		float			level;
		std::string		name;
		int				meleeAttackDamage;
		int				rangedAttackDamage;
		int				armorDamageReduction;
	public:
						ClapTrap(std::string name);
						ClapTrap(ClapTrap const &other);
		virtual			~ClapTrap(void);
		ClapTrap		&operator=(ClapTrap const &other);
		virtual	void	rangedAttack(std::string const &target);
		virtual void	meleeAttack(std::string const &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
