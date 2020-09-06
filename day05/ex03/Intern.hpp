#ifndef Intern_hpp
# define Intern_hpp

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
					Intern(void);
					Intern(const Intern &other);
					~Intern(void);
		Intern		&operator=(const Intern &other);
		Form		*makeForm(std::string formName, std::string target);
	private:
		std::string	formNames[3];
		Form		*(*constructors[3])(std::string target);
};

#endif