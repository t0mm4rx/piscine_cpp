#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>

int main(void)
{
	Form		*form;
	Bureaucrat	john("John", 23);
	Intern		intern;

	form = intern.makeForm("robotomy", "John");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	form = intern.makeForm("shr", "John");
	form = intern.makeForm("shrubbery", "house");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	form = intern.makeForm("presidential", "Micheal");
	john.signForm(*form);
	john.executeForm(*form);
	delete form;
	return (0);
}
