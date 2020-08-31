#ifndef PlasmaRifle_hpp
# define PlasmaRifle_hpp

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
				PlasmaRifle(void);
		void	attack(void) const;
};

#endif
