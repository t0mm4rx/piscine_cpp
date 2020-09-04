#ifndef PowerFist_hpp
# define PowerFist_hpp

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
	public:
					PowerFist(void);
					PowerFist(const PowerFist &other);
		PowerFist	&operator=(const PowerFist &other);
		virtual		~PowerFist(void);
		void		attack(void) const;
};

#endif
