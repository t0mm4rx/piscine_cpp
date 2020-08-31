#ifndef Sorcerer_hpp
# define Sorcerer_hpp

#include <string>
#include <iostream>
#include <sstream>
#include "Victim.hpp"

class Sorcerer
{
	public:
					Sorcerer(std::string name, std::string title);
					Sorcerer(const Sorcerer &target);
		Sorcerer	&operator=(const Sorcerer &target);
					~Sorcerer(void);
		std::string	getName(void) const;
		std::string	getTitle(void) const;
		void		polymorph(Victim const &) const;
	private:
		std::string	name;
		std::string	title;
};

std::ostream& operator << (std::ostream &stream, Sorcerer const &target);

#endif
