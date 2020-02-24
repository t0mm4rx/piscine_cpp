#ifndef Easyfind_Hpp
# define Easyfind_Hpp

#include <vector>
#include <iostream>
#include <algorithm>

template<typename T> int	easyfind(T &t, int i)
{
	typename T::iterator iterator;

	iterator = std::find(t.begin(), t.end(), i);
	if (iterator != t.end())
		return (*iterator);
	throw std::exception();
}

#endif
