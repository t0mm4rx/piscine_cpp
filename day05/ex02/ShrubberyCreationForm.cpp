#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : Form(name, 145, 137)
{}

void	ShrubberyCreationForm::execute(const Bureaucrat & bureaucrat) const
{
	std::ofstream  out_file;

	Form::execute(bureaucrat);
	out_file.open(getTarget() + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (out_file.fail())
	{
		std::cerr << "Cannot create output file" << std::endl;
		return ;
	}
}
