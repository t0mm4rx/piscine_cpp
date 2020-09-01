#include "Cure.hpp"

Cure::Cure():
	AMateria("cure")
{
}

Cure::Cure(const Cure &other):
	AMateria("cure")
{
	this->xp = other.xp;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &other)
{
	this->xp = other.xp;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	Cure *cpy = new Cure(*this);
	return (cpy);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
