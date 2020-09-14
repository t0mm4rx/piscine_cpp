#ifndef MutantStack_Hpp
# define MutantStack_Hpp
# include <iostream>
# include <stack>

template<typename T> class MutantStack : public std::stack<T>
{
	public:
																MutantStack(void);
																MutantStack(const MutantStack<T> &other);
																~MutantStack(void);
			MutantStack<T>										&operator=(const MutantStack<T> &other);
			typename std::stack<T>::container_type::iterator	begin(void) const;
			typename std::stack<T>::container_type::iterator	end(void) const;
};

#endif
