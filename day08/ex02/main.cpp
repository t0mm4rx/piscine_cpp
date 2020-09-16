#include "mutantstack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	MutantStack<int> s(mstack);
	std::cout << mstack.size() << "/" << s.size() << std::endl;
	while (!s.empty())
		s.pop();
	std::cout << "Size: " << s.size() << std::endl;
	for (int i = 0; i < 10; i++)
		s.push(i * 2);
	it = s.begin();
	while (it != s.end())
		std::cout << *(it++) << " - ";
	std::cout << std::endl;
	return (0);
}
