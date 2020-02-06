#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);
	return (0);
}
