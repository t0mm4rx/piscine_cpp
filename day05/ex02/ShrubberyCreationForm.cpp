#include "ShrubberyCreationForm.hpp"

const std::string ShrubberyCreationForm::tree =
			"               ,@@@@@@@,\n"
			"       ,,,.   ,@@@@@@/@@,  .oo8888o.\n"
			"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n"
			"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n"
			"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n"
			"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n"
			"   `&%\\ ` /%&'    |.|        \\ '|8'\n"
			"       |o|        | |         | |\n"
			"       |.|        | |         | |\n"
			"jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_\n"
		;

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), target(target)
{}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other.getName(), other.getSigningGrade(), other.getExecutionGrade())
{
	this->target = other.getTarget();
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	this->setName(other.getName());
	this->setSignatureGrade(other.getSigningGrade());
	this->setExecutionGrade(other.getExecutionGrade());
	this->target = other.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return this->target;
}

ShrubberyCreationForm::FileErrorException::FileErrorException(void)
{}

const char* ShrubberyCreationForm::FileErrorException::what() const throw()
{
	return "cannot write to file";
}

void	ShrubberyCreationForm::execute(const Bureaucrat &bureaucrat) const
{
	std::string		filename = this->target + "_shrubbery";
	std::ofstream	file(filename);

	if (file.fail())
		throw FileErrorException();
	Form::execute(bureaucrat);
	std::cout << "Creating " << filename << "." << std::endl;
	file << this->tree;
	file.close();
}
