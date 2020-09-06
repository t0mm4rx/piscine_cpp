#ifndef ShrubberyCreationForm_hpp
# define ShrubberyCreationForm_hpp

# include "Form.hpp"
# include "Bureaucrat.hpp"
# include <fstream>

class ShrubberyCreationForm : public Form
{
	public:
		class 						FileErrorException : public std::exception
		{
			public:
				FileErrorException(void);
				const char *what() const throw();
		};
									ShrubberyCreationForm(std::string target);
									ShrubberyCreationForm(const ShrubberyCreationForm &other);
		virtual						~ShrubberyCreationForm();
		ShrubberyCreationForm		&operator=(const ShrubberyCreationForm &other);
		void						execute(const Bureaucrat &bureaucrat) const;
		std::string					getTarget(void) const;
	private:
									ShrubberyCreationForm(void);
		std::string					target;
		static const std::string	tree;
};

#endif
