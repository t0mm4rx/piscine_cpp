#ifndef AWeapon_hpp
# define AWeapon_hpp

# include <string>
# include <iostream>

class AWeapon
{
	public:
						AWeapon(const std::string &name = "Unnamed", int apCost = 0, int damage = 0);
						AWeapon(const AWeapon &other);
		AWeapon			&operator=(const AWeapon &other);
		virtual			~AWeapon(void);
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void) const = 0;
	private:
		std::string		name;
		int				apCost;
		int				damage;

};

#endif
