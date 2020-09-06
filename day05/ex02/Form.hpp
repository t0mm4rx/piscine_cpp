#ifndef Form_hpp
# define Form_hpp

# include <string>
# include <iostream>
class Form;
# include "Bureaucrat.hpp"

class Form
{
	public:
		class 			GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				const char *what() const throw();
		};
		class 			GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				const char *what() const throw();
		};
		class 			NotSignedException : public std::exception
		{
			public:
				NotSignedException(void);
				const char *what() const throw();
		};
						Form(std::string name, int requiredSignatureGrade, int requiredExecutionGrade);
						Form(const Form &other);
		virtual			~Form(void);
		Form			&operator=(const Form &other);
		void			setSignatureGrade(int grade);
		void			setExecutionGrade(int grade);
		void			setName(std::string name);
		int				getSigningGrade(void) const;
		int				getExecutionGrade(void) const;
		std::string		getName(void) const;
		void			beSigned(Bureaucrat &bureaucrat);
		virtual void	execute(const Bureaucrat &executor) const = 0;
	private:
		std::string		name;
		bool			hasBeenSigned;
		int				requiredSignatureGrade;
		int				requiredExecutionGrade;
						Form(void);
};

std::ostream		&operator<<(std::ostream &out, const Form &target);

#endif
