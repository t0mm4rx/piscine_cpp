#ifndef HumanA_hpp
#define HumanA_hpp

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA {
private:
	Weapon		&weapon;
	std::string	name;
public:
    HumanA(std::string name, Weapon &weapon);
	void attack();

};

#endif
