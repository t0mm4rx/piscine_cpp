#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &target)
{
	(void)target;
}

Sorcerer &Sorcerer::operator=(const Sorcerer &target)
{
	this->name = target.name;
	this->title = target.title;
	return (*this);
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same" << std::endl;
}

std::string Sorcerer::getName(void) const
{
	return (this->name);
}

std::string Sorcerer::getTitle(void) const
{
	return (this->title);
}
