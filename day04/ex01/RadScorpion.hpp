#ifndef RadScorpion_hpp
# define RadScorpion_hpp

# include "Enemy.hpp"
# include <iostream>

class RadScorpion : public Enemy
{
	public:
					RadScorpion(void);
					RadScorpion(const RadScorpion &other);
		RadScorpion	&operator=(const RadScorpion &other);
		virtual		~RadScorpion(void);
};

#endif
