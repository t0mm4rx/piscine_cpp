#ifndef AssaultTerminator_hpp
# define AssaultTerminator_hpp

# include "ISpaceMarine.hpp"
# include <iostream>

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
        ~AssaultTerminator(void);
        AssaultTerminator		&operator= (const AssaultTerminator &rhs);
        virtual void			battleCry(void) const;
        virtual void			meleeAttack(void) const;
        virtual void			rangedAttack(void) const;
        virtual ISpaceMarine	*clone(void) const;
};

#endif
