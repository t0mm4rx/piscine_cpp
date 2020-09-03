#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException(void)
{}

Form::GradeTooHighException::GradeTooHighException(void)
{}

Form::Form(std::string name, int requiredSignatureGrade, int requiredExecutionGrade) : name(name)
{
	this->setExecutionGrade(requiredExecutionGrade);
	this->setSignatureGrade(requiredSignatureGrade);
	this->hasBeenSigned = false;
}

Form::Form(const Form &other)
{
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	this->name = other.name;
	this->hasBeenSigned = other.hasBeenSigned;
	this->requiredSignatureGrade = other.requiredSignatureGrade;
	this->requiredExecutionGrade = other.requiredExecutionGrade;
	return (*this);
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

std::ostream	&operator<<(std::ostream &out, const Form &target)
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

void			Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->getSigningGrade())
		throw GradeTooLowException();
	std::cout << bureaucrat.getName() << " signs " << this->getName() << std::endl;
	this->hasBeenSigned = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "grade too low";
}
