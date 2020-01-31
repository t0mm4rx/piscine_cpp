#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

Zombie::Zombie(std::string name, std::string type)
{
    this->type = type;
    this->name = name;
}

void Zombie::announce(void)
{
	float nb_a;

	nb_a = rand() % 20 + 2;
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	for (int i = 0; i < nb_a; i++)
		std::cout << "a";
	std::cout << "h" << std::endl;
}

void Zombie::setType(std::string type)
{
	this->type = type;
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
