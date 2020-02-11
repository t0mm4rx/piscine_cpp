#ifndef AWeapon_hpp
# define AWeapon_hpp

# include <string>
# include <iostream>

class AWeapon
{
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon(void);
		std::string		getName(void) const;
		int				getAPCost(void) const;
		int				getDamage(void) const;
		virtual void	attack(void);
	private:
		std::string		name;
		int				apcost;
		int				damage;

};

#endif
