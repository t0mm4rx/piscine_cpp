#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45), target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other.getName(), other.getSigningGrade(), other.getExecutionGrade())
{
	this->target = other.getTarget();
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	this->setName(other.getName());
	this->setSignatureGrade(other.getSigningGrade());
	this->setExecutionGrade(other.getExecutionGrade());
	this->target = other.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{}

std::string RobotomyRequestForm::getTarget(void) const
{
	return this->target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	Form::execute(bureaucrat);
	std::cout << "ZZZZZZzzzzzzz" << std::endl;
	std::cout << bureaucrat.getName() << " has been robotomized." << std::endl;
}
