#ifndef MutantStack_Hpp
# define MutantStack_Hpp
# include <iostream>
# include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
			typedef typename std::stack<T>::container_type::iterator iterator;
								MutantStack(void) : std::stack<T>() {};
								MutantStack(const MutantStack<T> &other) : std::stack<T>(other) {};
								~MutantStack(void) {};
			MutantStack<T>		&operator=(const MutantStack<T> &other)
			{
				this->c = other.c;
				return (*this);
			};
			iterator			begin(void)
			{
				return (this->c.begin());
			};
			iterator			end(void)
			{
				return (this->c.end());
			};
};

#endif
