#ifndef PowerFist_hpp
# define PowerFist_hpp

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
				PowerFist(void);
		void	attack(void) const;
};

#endif
