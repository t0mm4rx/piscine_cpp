#include "AMateria.hpp"

AMateria::AMateria(const std::string &type):
	type(type), xp(0)
{
}

AMateria::AMateria(const AMateria &other)
{
	*this = other;
}

AMateria &AMateria::operator=(const AMateria &other)
{
	this->xp = other.getXP();
	this->type = other.getType();
	return (*this);
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
