#ifndef Bureaucrat_hpp
# define Bureaucrat_hpp

# include <string>
# include <stdexcept>
# include <iostream>

class Bureaucrat
{
	public:
					Bureaucrat(std::string name, int grade);
		int			getGrade(void) const;
		std::string	getName(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		void		setGrade(int grade);
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
	private:
		std::string	name;
		int			grade;
					Bureaucrat(void);
};

std::ostream		&operator<< (std::ostream &out, const Bureaucrat &rhs);

#endif
