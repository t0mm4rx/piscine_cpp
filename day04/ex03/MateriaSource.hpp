#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <string>
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	int				amount;
	AMateria		*sources[4];
public:
					MateriaSource();
					MateriaSource(const MateriaSource &other);
	virtual			~MateriaSource();
	MateriaSource	&operator=(const MateriaSource &other);
	void			learnMateria(AMateria *m);
	AMateria		*createMateria(const std::string &type);
};

#endif
