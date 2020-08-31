#ifndef SuperMutant_hpp
# define SuperMutant_hpp

# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
	public:
				SuperMutant(void);
				~SuperMutant(void);
		void	takeDamage(int damage);
};

#endif
