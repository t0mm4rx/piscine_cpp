#ifndef SuperMutant_hpp
# define SuperMutant_hpp

# include "Enemy.hpp"
# include <iostream>

class SuperMutant : public Enemy
{
	public:
					SuperMutant(void);
					SuperMutant(const SuperMutant &other);
		SuperMutant	&operator=(const SuperMutant &other);
		virtual		~SuperMutant(void);
		void		takeDamage(int damage);
};

#endif
