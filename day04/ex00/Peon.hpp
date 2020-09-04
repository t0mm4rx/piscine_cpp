#ifndef Peon_hpp
# define Peon_hpp

# include "Victim.hpp"
# include <string>
# include <iostream>

class Peon : public Victim
{
	public:
				Peon(std::string name);
				Peon(const Peon &other);
		Peon	&operator=(const Peon &other);
		virtual	~Peon(void);
		void	getPolymorphed(void) const;
	private:
				Peon(void);
};

#endif
