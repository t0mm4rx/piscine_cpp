#include "Base.hpp"
#include "Classes.hpp"
#include <iostream>
#define PRINT(X) std::cout << X << std::endl

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		PRINT("A");
	if (dynamic_cast<B*>(p))
		PRINT("B");
	if (dynamic_cast<C*>(p))
		PRINT("C");
}

int		main(void)
{
	return (0);
}
