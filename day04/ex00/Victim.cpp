#include "Victim.hpp"

Victim::Victim(std::string name) : name(name)
{
	std::cout << "A random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &other)
{
	*this = other;
	std::cout << "A random victim called " << this->name << " just appeared!" << std::endl;
}

Victim &Victim::operator=(const Victim &other)
{
	this->name = other.name;
	return (*this);
}

Victim::~Victim(void)
{
	std::cout << "The victim " << this->name << " died for no apparent reasons!" << std::endl;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->name << " was just polymorphed in a cute little sheep!" << std::endl;
}

std::string Victim::getName(void) const
{
	return (this->name);
}

std::ostream &operator<<(std::ostream &stream, Victim const &target)
{
	stream << "I'm " << target.getName() << " and I like otters !";
	return (stream);
}
