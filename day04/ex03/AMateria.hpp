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
						AMateria(const AMateria &other);
	AMateria			&operator=(const AMateria &other);
	virtual				~AMateria();
	const std::string	&getType(void) const;
	unsigned int		getXP(void) const;
	virtual AMateria	*clone(void) const = 0;
	virtual void		use(ICharacter &target);
};

#endif
