#ifndef Weapon_hpp
#define Weapon_hpp

#include <string>

class Weapon {
	private:
		std::string	type;
	public:
					Weapon(std::string type);
	    void		setType(std::string type);
		std::string	getType(void);
};


#endif
