#include "Array.hpp"
#include <iostream>
#define PRINT(X) std::cout << X << std::endl

int main(void)
{
	Array<int> *arr = new Array<int>(5);
	delete arr;
	return (0);
}
