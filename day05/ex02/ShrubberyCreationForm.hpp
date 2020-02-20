#ifndef ShrubberyCreationForm_hpp
# define ShrubberyCreationForm_hpp

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string name);
		virtual void	execute(const Bureaucrat & bureaucrat) const;
};

#endif
