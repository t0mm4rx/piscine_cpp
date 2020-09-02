#include "Array.hpp"
#include <iostream>

int main(void)
{
	std::cout << "Test copy with int array." << std::endl;
	Array<int> *arr = new Array<int>(5);
	for (unsigned int i = 0; i < arr->size(); i++)
		(*arr)[i] = i * 2;
	Array<int> copy = *arr;
	(*arr)[0] = 42;
	(*arr)[1] = -54;
	std::cout << "Length: " << copy.size() << std::endl;
	for (unsigned int i = 0; i < copy.size(); i++)
		std::cout << copy[i] << std::endl;
	delete arr;
	std::cout << "Test initializing int array." << std::endl;
	Array<int> *arr2 = new Array<int>(5);
	std::cout << "Length: " << arr2->size() << std::endl;
	for (unsigned int i = 0; i < arr2->size(); i++)
		std::cout << (*arr2)[i] << std::endl;
	try
	{
		std::cout << (*arr2)[5] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception while reading arr2[5]." << std::endl;
	}
	delete arr2;
	std::cout << "Test empty array." << std::endl;
	Array<std::string> *arr3 = new Array<std::string>();
	std::cout << "Length: " << arr3->size() << std::endl;
	try
	{
		std::cout << (*arr3)[4] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception while reading arr3[4]." << std::endl;
	}
	try
	{
		std::cout << (*arr3)[-1] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception while reading arr3[-1]." << std::endl;
	}
	delete arr3;
	return (0);
}
