#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat john("John", 3);
	Form deal("Deal", 11, 1);

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
	john.setGrade(10);
	std::cout << deal;
	try
	{
		deal.beSigned(john);
	}
	catch(std::exception)
	{
		std::cout << john.getName() << " cant sign " << deal.getName() << " because its grade is too low." << std::endl;
	}
	john.signForm(deal);
	return (0);
}
