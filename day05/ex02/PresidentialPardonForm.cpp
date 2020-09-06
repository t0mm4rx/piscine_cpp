#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 45), target(target)
{}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other.getName(), other.getSigningGrade(), other.getExecutionGrade())
{
	this->target = other.getTarget();
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	this->setName(other.getName());
	this->setSignatureGrade(other.getSigningGrade());
	this->setExecutionGrade(other.getExecutionGrade());
	this->target = other.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{}

std::string PresidentialPardonForm::getTarget(void) const
{
	return this->target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::cout << bureaucrat.getName() << " has been forgiven by Zafod Beeblebrox." << std::endl;
}