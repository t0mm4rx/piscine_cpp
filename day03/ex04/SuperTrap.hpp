#ifndef SuperTrap_Hpp
#define SuperTrap_Hpp

#include "NinjaTrap.hpp"
#include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
	public:
		SuperTrap(std::string name);
};

#endif
