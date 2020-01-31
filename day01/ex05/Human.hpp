#ifndef Human_hpp
#define Human_hpp

#include <string>
#include "Brain.hpp"

class Human {
	public:
		Brain getBrain(void);
		std::string identify(void);
	private:
		Brain brain;
};

#endif
