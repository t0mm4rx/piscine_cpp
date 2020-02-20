#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat john("John", 3);
	Form deal("Deal", 11, 1);
	ShrubberyCreationForm contract("contract");

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
	try
	{
		contract.execute(john);
	}
	catch(std::exception)
	{
		std::cout << "Cannot sign contract because the document has not been signed." << std::endl;
	}
	return (0);
}
