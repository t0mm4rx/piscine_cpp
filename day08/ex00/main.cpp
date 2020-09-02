#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main()
{
	std::vector<int> list;
	for (int i = 0; i < 20; i++)
		list.push_back(i * 2);
	try
	{
		std::cout << easyfind(list, 4) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find 4" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 1) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find 1" << std::endl;
	}
	try
	{
		std::cout << easyfind(list, 38) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find 38" << std::endl;
	}
	std::list<int> list2;
	for (int i = -5; i <= 5; i++)
		list2.push_back(i);
	try
	{
		std::cout << easyfind(list2, 0) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find 0" << std::endl;
	}
	try
	{
		std::cout << easyfind(list2, -7) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Cannot find -7" << std::endl;
	}
}
