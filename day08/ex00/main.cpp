#include <iostream>
#include <vector>
#include "easyfind.hpp"
#define PRINT(X) std::cout << X << std::endl

int main()
{
	std::vector<int> list;

	for (int i = 0; i < 20; i++)
		list.push_back(i * 2);
	try
	{
		PRINT(easyfind(list, 4));
	}
	catch (std::exception err)
	{
		PRINT("Cannot find 4");
	}
	try
	{
		PRINT(easyfind(list, 1));
	}
	catch (std::exception err)
	{
		PRINT("Cannot find 1");
	}
	try
	{
		PRINT(easyfind(list, 38));
	}
	catch (std::exception err)
	{
		PRINT("Cannot find 38");
	}
}
