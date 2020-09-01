#include "AMateria.hpp"

AMateria::AMateria(const std::string &type):
	type(type), xp(0)
{
}

AMateria::~AMateria()
{
}

const std::string &AMateria::getType(void) const
{
	return (this->type);
}

unsigned int AMateria::getXP(void) const
{
	return (this->xp);
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->xp += 10;
}
