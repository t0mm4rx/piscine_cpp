#include <iostream>
#include "Sorcerer.hpp"
#include "Peon.hpp"

int main(void)
{
	Sorcerer john("John", "Master");
	Victim micheal("Micheal");
	Victim tmp = micheal;
	Peon rose("Rose");
	Peon roseCopy = rose;
	Victim michealCopy(micheal);
	john.polymorph(micheal);
	john.polymorph(rose);
	john.polymorph(roseCopy);
	std::cout << micheal << std::endl;
	return (0);
}
