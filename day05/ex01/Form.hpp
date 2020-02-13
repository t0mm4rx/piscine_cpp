#ifndef Form_hpp
# define Form_hpp

# include <string>
# include <iostream>
# include "Bureaucrat.hpp"

class Form
{
	public:
		class 		GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
		};

		class 		GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
		};
					Form(std::string name, int requiredSignatureGrade, int requiredExecutionGrade);
		void		setSignatureGrade(int grade);
		void		setExecutionGrade(int grade);
		int			getSigningGrade(void) const;
		int			getExecutionGrade(void) const;
		std::string	getName(void) const;
		void		beSigned(Bureaucrat & bureaucrat);
	private:
		std::string	name;
		bool		hasBeenSigned;
		int			requiredSignatureGrade;
		int			requiredExecutionGrade;
};

std::ostream		&operator<< (std::ostream &out, const Form &target);

#endif
