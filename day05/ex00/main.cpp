#include "Bureaucrat.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat john("John", 27);

	std::cout << john;
	std::cout << "-- Setting grade to 151 --" << std::endl;
	try
	{
		john.setGrade(151);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john;
	std::cout << "-- Setting grade to 1. --" << std::endl;
	try
	{
		john.setGrade(1);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john;
	std::cout << "-- Setting grade to -1. --" << std::endl;
	try
	{
		john.setGrade(-1);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when setting grade: " << e.what() << "." << std::endl;
	}
	std::cout << john;
	std::cout << "-- Incrementing grade --" << std::endl;
	try
	{
		john.incrementGrade();
	}
	catch(std::exception &e)
	{
		std::cout << "Error when incrementing grade: " << e.what() << "." << std::endl;
	}
	std::cout << "-- Creating a Bureaucrat with invalid grade --"<< std::endl;
	try
	{
		Bureaucrat alice("Alice", 500);
	}
	catch(std::exception &e)
	{
		std::cout << "Error when creating Bureaucrat: " << e.what() << "." << std::endl;
	}
	return (0);
}
