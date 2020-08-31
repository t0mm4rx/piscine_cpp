#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer john("John", "Master");
	Victim micheal("Micheal");
	Peon rose("Rose");
	Peon roseCopy = rose;
	Victim michealCopy(micheal);
	john.polymorph(micheal);
	john.polymorph(rose);
	john.polymorph(roseCopy);
	return (0);
}
