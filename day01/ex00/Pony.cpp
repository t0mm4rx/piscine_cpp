#include "Pony.hpp"

Pony::Pony(std::string name, std::string color, int age) : name(name), color(color), age(age)
{
}

void Pony::sayHi(void)
{
	std::cout << "Hi ! I'm " << this->name << ", a " << this->color << " pony of " << this->age << "yo." << std::endl;
}

Pony::~Pony(void)
{
	std::cout << "Pony destroyed" << std::endl;
}
