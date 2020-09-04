#ifndef TacticalMarine_hpp
# define TacticalMarine_hpp

# include "ISpaceMarine.hpp"
# include <iostream>

class TacticalMarine : public ISpaceMarine
{
	public:
								TacticalMarine(void);
								TacticalMarine(const TacticalMarine &other);
								~TacticalMarine(void);
		TacticalMarine			&operator=(const TacticalMarine &other);
		virtual void			battleCry(void) const;
		virtual void			meleeAttack(void) const;
		virtual void			rangedAttack(void) const;
		virtual ISpaceMarine	*clone(void) const;
};

#endif
