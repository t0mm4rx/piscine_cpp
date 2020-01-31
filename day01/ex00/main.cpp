#include "Pony.hpp"

void ponyOnTheHeap(void)
{
	Pony *pony = new Pony("Jean-Jacques", "multicolor", 45);
	pony->sayHi();
	delete pony;
}

void ponyOnTheStack(void)
{
	Pony pony("Micheal", "blue", 18);
	pony.sayHi();
}

int main(void)
{
	std::cout << "Pony on the stack, doesn't call any destructor" << std::endl;
	ponyOnTheStack();
	std::cout << std::endl << "Pony on the heap, call delete" << std::endl;
	ponyOnTheHeap();
}
