#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException(void)
{}

Form::GradeTooHighException::GradeTooHighException(void)
{}

Form::NotSignedException::NotSignedException(void)
{}

Form::Form(std::string name, int requiredSignatureGrade, int requiredExecutionGrade) : name(name)
{
	this->setExecutionGrade(requiredExecutionGrade);
	this->setSignatureGrade(requiredSignatureGrade);
	this->hasBeenSigned = false;
}

void			Form::setSignatureGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->requiredSignatureGrade = grade;
}

void			Form::setExecutionGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->requiredExecutionGrade = grade;
}

std::ostream	&operator<< (std::ostream &out, const Form &target)
{
	out << target.getName() << " minimum signing grade: " << target.getSigningGrade() << ", minimum executing grade: " << target.getExecutionGrade() << std::endl;
	return (out);
}

int				Form::getSigningGrade(void) const
{
	return (this->requiredSignatureGrade);
}

int				Form::getExecutionGrade(void) const
{
	return (this->requiredExecutionGrade);
}

std::string		Form::getName(void) const
{
	return (this->name);
}

void			Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSigningGrade())
		throw GradeTooLowException();
	std::cout << bureaucrat.getName() << " signs " << this->getName() << std::endl;
	this->hasBeenSigned = true;
}

void			Form::execute(const Bureaucrat & bureaucrat) const
{
	if (bureaucrat.getGrade() < this->getExecutionGrade())
		throw GradeTooLowException();
	if (!this->hasBeenSigned)
		throw NotSignedException();
}
