#ifndef Squad_hpp
# define Squad_hpp

# define MAX_UNITS 100
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
		~Squad(void);
		int				getCount(void) const;
		ISpaceMarine	*getUnit(int index) const;
		int				push(ISpaceMarine *unit);
	private:
		int				current = 0;
		ISpaceMarine	*units[MAX_UNITS] = {0};
};

#endif
