#include "Form.hpp"

Form::GradeTooLowException::GradeTooLowException(void)
{}

Form::GradeTooHighException::GradeTooHighException(void)
{}

Form::~Form(void)
{}

Form::Form(std::string name, int requiredSignatureGrade, int requiredExecutionGrade) : name(name), requiredSignatureGrade(requiredSignatureGrade), requiredExecutionGrade(requiredExecutionGrade)
{
	if (requiredExecutionGrade < 1 || requiredSignatureGrade < 1)
		throw GradeTooHighException();
	if (requiredExecutionGrade > 150 || requiredSignatureGrade > 150)
		throw GradeTooLowException();
	this->hasBeenSigned = false;
}

Form::Form(const Form &other) : name(other.getName()), requiredSignatureGrade(other.getSigningGrade()), requiredExecutionGrade(other.getExecutionGrade())
{
	*this = other;
}

Form &Form::operator=(const Form &other)
{
	this->hasBeenSigned = other.hasBeenSigned;
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, const Form &target)
{
	out << target.getName() << " minimum signing grade: " << target.getSigningGrade() << ", minimum executing grade: " << target.getExecutionGrade() << ".";
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
	std::cout << bureaucrat.getName() << " signs " << this->getName() << "." << std::endl;
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
