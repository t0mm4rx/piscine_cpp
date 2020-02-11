#ifndef ISquad_hpp
# define ISquad_hpp

# include "ISpaceMarine.hpp"

class ISquad
{
	public:
		virtual ~ISquad(void) {};
		virtual int getCount(void) const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif
