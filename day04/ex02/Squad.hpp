#ifndef Squad_hpp
# define Squad_hpp

# define MAX_UNITS 100
# include <iostream>
# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	public:
						Squad(void);
						Squad(Squad const &other);
						~Squad(void);
		Squad			&operator = (Squad const &other);
		int				getCount(void) const;
		ISpaceMarine	*getUnit(int index) const;
		int				push(ISpaceMarine *unit);
	private:
		int				current;
		ISpaceMarine	**units;
};

#endif
