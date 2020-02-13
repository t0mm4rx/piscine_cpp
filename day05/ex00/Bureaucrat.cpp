#include "Bureaucrat.hpp"

			Bureaucrat::Bureaucrat(std::string name, int grade): name(name)
{
	this->setGrade(grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

std::string	Bureaucrat::getName(void) const
{
	return (this->name);
}

int			Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void		Bureaucrat::incrementGrade(void)
{
	this->setGrade(this->getGrade() - 1);
}

void		Bureaucrat::decrementGrade(void)
{
	this->setGrade(this->getGrade() - 1);
}

std::ostream&operator<< (std::ostream &out, const Bureaucrat &target)
{
    out << target.getName() << ", bureaucrat grade " << target.getGrade() << std::endl;
    return (out);
}


			GradeTooHighException::GradeTooHighException(void)
{}

			GradeTooLowException::GradeTooLowException(void)
{}
