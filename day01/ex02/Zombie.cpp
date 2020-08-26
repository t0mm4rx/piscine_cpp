#include "Zombie.hpp"

Zombie::Zombie(std::string name, std::string type) : type(type), name(name)
{
}

void Zombie::announce(void)
{
	float nb_a;

	nb_a = rand() % 20 + 2;
	std::cout << "<" << this->name << " (" << this->type << ")> ";
	std::cout << "A";
	for (int i = 0; i < 2 + rand() % 20; i++)
		std::cout << "a";
	std::cout << "h" << std::endl;
}
