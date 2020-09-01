#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>
# include <string>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
private:
						AMateria();
protected:
	std::string			type;
	unsigned int		xp;
public:
						AMateria(const std::string &type);
	virtual				~AMateria();
	const std::string	&getType(void) const;
	unsigned int		getXP(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif
