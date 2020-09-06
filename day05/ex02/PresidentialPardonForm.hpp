#ifndef PresidentialPardonForm_hpp
# define PresidentialPardonForm_hpp

# include "Form.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
								PresidentialPardonForm(std::string target);
								PresidentialPardonForm(const PresidentialPardonForm &other);
		virtual					~PresidentialPardonForm();
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);
		void					execute(const Bureaucrat &bureaucrat) const;
		std::string				getTarget(void) const;
	private:
								PresidentialPardonForm(void);
		std::string				target;
};

#endif
