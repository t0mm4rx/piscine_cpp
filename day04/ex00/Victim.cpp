#include "Victim.hpp"

Victim::Victim(std::string name) : name(name)
{
	std::cout << "A random victim called " << this->name << " just appeared!" << std::endl;
}

Victim::~Victim(void)
{
	std::cout << "The victim " << this->name << " died for no apparent reasons!" << std::endl;
}

void Victim::getPolymorphed(void) const
{
	std::cout << this->name << " was just polymorphed in a cute little sheep!" << std::endl;
}
