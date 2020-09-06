#ifndef Bureaucrat_hpp
# define Bureaucrat_hpp

# include <string>
# include <stdexcept>
# include <iostream>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
	public:
		class 		GradeTooHighException : public std::exception
		{
			public:
				GradeTooHighException(void);
				const char *what() const throw();
		};
		class 		GradeTooLowException : public std::exception
		{
			public:
				GradeTooLowException(void);
				virtual const char *what() const throw();
		};
					Bureaucrat(std::string name, int grade);
					Bureaucrat(const Bureaucrat &other);
					~Bureaucrat(void);
		Bureaucrat	&operator=(const Bureaucrat &other);
		int			getGrade(void) const;
		std::string	getName(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		setGrade(int grade);
		void		signForm(Form &form);
	private:
		std::string	name;
		int			grade;
					Bureaucrat(void);
};

std::ostream		&operator<<(std::ostream &out, const Bureaucrat &rhs);

#endif
