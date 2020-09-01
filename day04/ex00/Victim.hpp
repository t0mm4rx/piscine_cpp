#ifndef Victim_hpp
# define Victim_hpp

#include <string>
#include <iostream>
#include <sstream>

class Victim
{
	public:
						Victim(std::string name="Unnamed");
						Victim(const Victim &other);
						~Victim(void);
		Victim			&operator=(const Victim &other);
		virtual void	getPolymorphed(void) const;
		std::string		getName(void) const;
	protected:
		std::string		name;
};

std::ostream& operator<<(std::ostream &out, Victim const &target);

#endif
