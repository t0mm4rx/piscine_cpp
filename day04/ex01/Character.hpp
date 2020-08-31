#ifndef Character_hpp
# define Character_hpp

# include <string>
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
	public:
					Character(const std::string &name);
					Character(const Character &other);
					~Character(void);
		Character	&operator=(const Character &other);
		void		recoverAP(void);
		void		equip(AWeapon *weapon);
		void		attack(Enemy *enemy);
		std::string	getName(void) const;
		int			getAP(void) const;
		AWeapon		*getWeapon(void) const;
	private:
		std::string	name;
		int			ap;
		AWeapon		*weapon;
};

std::ostream& operator<<(std::ostream& os, const Character& dt);

#endif
