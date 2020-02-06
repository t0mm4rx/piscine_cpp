#ifndef Vitcim_hpp
# define Vitcim_hpp

#include <string>
#include <iostream>

class Vitcim
{
	public:
		Victim(std::string name, std::string title);
		~Victim(void);
		void getPolymorphed(void) const;
	private:
		std::string name;
};

#endif
