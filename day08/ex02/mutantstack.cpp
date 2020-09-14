#include "mutantstack.hpp"

template<typename T> MutantStack<T>::MutantStack(void) : std::stack<T>()
{}

template<typename T> MutantStack<T>::MutantStack(const MutantStack<T> &other) : std::stack<T>(other)
{
}

template<typename T> MutantStack<T>::~MutantStack(void)
{}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other)
{
	this->c = other.c;
	return (*this);
}

template <typename T>
typename std::stack<T>::container_type::iterator MutantStack<T>::begin(void) const
{
	return this->c.begin();
}