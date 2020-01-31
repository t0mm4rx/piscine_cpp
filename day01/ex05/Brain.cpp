#include "Brain.hpp"

Brain::Brain(void)
{
	std::stringstream buffer;
	buffer << this;
	this->address = buffer.str();
}

std::string Brain::identify()
{
	return this->address;
}
