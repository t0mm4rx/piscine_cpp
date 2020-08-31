#include "Peon.hpp"

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << name << ": Zog zog." << std::endl;
}

Peon::Peon(const Peon &other) : Victim(other)
{
	std::cout << name << ": Zog zog." << std::endl;
}

Peon &Peon::operator=(const Peon &other)
{
	*this = other;
	std::cout << "A random victim called " << this->name << " just appeared!" << std::endl;
	return (*this);
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed(void) const
{
	std::cout << this->name << " was just polymorphed into a pink pony!" << std::endl;
}
