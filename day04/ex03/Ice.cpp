#include "Ice.hpp"

Ice::Ice():
	AMateria("ice")
{
}

Ice::Ice(const Ice &other):
	AMateria("ice")
{
	this->xp = other.xp;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &other)
{
	this->xp = other.xp;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
