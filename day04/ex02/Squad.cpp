#include "Squad.hpp"

Squad::~Squad(void)
{
	for (int i = 0; i < current; i++) {
		delete units[i];
	}
}

int				Squad::getCount(void) const
{
	return (this->current);
}

ISpaceMarine	*Squad::getUnit(int n) const
{
	return (this->units[n]);
}

int				Squad::push(ISpaceMarine *unit)
{
	if (unit == 0)
		return (0);
	for (int i = 0; i < this->current; i++) {
		if (this->units[i] == unit)
			return (0);
	}
	this->units[this->current++] = unit;
	return (1);
}
