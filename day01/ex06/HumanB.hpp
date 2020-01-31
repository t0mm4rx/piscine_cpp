#ifndef HumanB_hpp
#define HumanB_hpp

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB {
private:
	Weapon		*weapon;
	std::string	name;

public:
    HumanB(std::string name);
	void setWeapon(Weapon &weapon);
	void attack();

};

#endif
