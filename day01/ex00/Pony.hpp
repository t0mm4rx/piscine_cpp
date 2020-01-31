#ifndef PONY_HPP
# define PONY_HPP

# include <string>
# include <iostream>

class Pony
{
	public:
		Pony(std::string name, std::string color, int age);
		~Pony(void);
		void sayHi(void);
	private:
		std::string name;
		std::string color;
		int age;
};

void ponyOnTheStack();
void ponyOnTheHeap();

#endif
