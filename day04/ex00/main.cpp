#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer john("John", "Master");
	Victim micheal("Micheal");
	Peon rose("Rose");
	john.polymorph(micheal);
	john.polymorph(rose);
	return (0);
}
