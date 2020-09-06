#include "Intern.hpp"

Intern::Intern(void)
{
	this->constructors[0] = ShrubberyCreationForm::constructor;
	this->formNames[0] = "shrubbery";
	this->constructors[1] = RobotomyRequestForm::constructor;
	this->formNames[1] = "robotomy";
	this->constructors[2] = PresidentialPardonForm::constructor;
	this->formNames[2] = "presidential";
}

Intern::Intern(const Intern &other)
{
	(void)other;
}

Intern &Intern::operator=(const Intern &other)
{
	(void)other;
	return (*this);
}

Intern::~Intern(void)
{}

Form *Intern::makeForm(std::string formName, std::string target)
{
	for (unsigned int i = 0; i < 3; i++)
	{
		if (this->formNames[i] == formName)
		{
			return ((this->constructors[i])(target));
		}
	}
	std::cout << "No form with name " << formName << "." << std::endl;
	return (nullptr);
}