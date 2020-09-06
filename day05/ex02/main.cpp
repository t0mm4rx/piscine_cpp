#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>

int main(void)
{
	Bureaucrat				john("John", 4);
	Bureaucrat				johnson("Johnson", 140);
	ShrubberyCreationForm	form1("tree");
	RobotomyRequestForm		form2("Micheal");
	PresidentialPardonForm	form3("Johson");

	johnson.signForm(form1);
	johnson.executeForm(form1);
	john.executeForm(form1);
	john.executeForm(form2);
	john.signForm(form2);
	john.executeForm(form2);
	johnson.signForm(form3);
	john.executeForm(form3);
	john.signForm(form3);
	john.executeForm(form3);
	return (0);
}
