#ifndef RobotomyRequestForm_hpp
# define RobotomyRequestForm_hpp

# include "Form.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	public:
								RobotomyRequestForm(std::string target);
								RobotomyRequestForm(const RobotomyRequestForm &other);
		virtual					~RobotomyRequestForm();
		RobotomyRequestForm		&operator=(const RobotomyRequestForm &other);
		void					execute(const Bureaucrat &bureaucrat) const;
		std::string				getTarget(void) const;
	private:
								RobotomyRequestForm(void);
		std::string				target;
};

#endif
