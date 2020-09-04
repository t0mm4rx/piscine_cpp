#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &other) : Enemy(other.getHP(), other.getType())
{}

RadScorpion &RadScorpion::operator=(const RadScorpion &other)
{
	this->type = other.getType();
	this->hp = other.getHP();
	return (*this);
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;
}
