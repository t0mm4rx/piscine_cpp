#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat john("John", 27);

	std::cout << john;
	try
	{
		john.setGrade(151);
	}
	catch(std::exception)
	{
		std::cout << "Error when setting grade." << std::endl;
	}
	std::cout << john;
	try
	{
		john.setGrade(1);
	}
	catch(std::exception)
	{
		std::cout << "Error when setting grade." << std::endl;
	}
	std::cout << john;
	try
	{
		john.incrementGrade();
	}
	catch(std::exception)
	{
		std::cout << "Error when incrementing grade." << std::endl;
	}
	return (0);
}
