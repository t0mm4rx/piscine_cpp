#include "span.hpp"

		Span::Span(void) : maxItems(INT_MAX)
{}

		Span::Span(unsigned int n) : maxItems(n)
{}

void	Span::addNumber(int n)
{
	if (this->isInList(n))
		throw std::exception();
	if (this->list.size() >= this->maxItems)
		throw std::exception();
	this->list.push_back(n);
}

bool	Span::isInList(int n)
{
	return (std::find(this->list.begin(), this->list.end(), n) != this->list.end());
}

int		Span::shortestSpan(void)
{
	int							min;
	int							tmp;
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;

	if (this->list.size() <= 1)
		throw std::exception();
	min = INT_MAX;
	it1 = this->list.begin();
	while (it1 != this->list.end())
	{
		it2 = this->list.begin();
		while (it2 != this->list.end())
		{
			if (it1 != it2)
			{
				tmp = abs(*it1 - *it2);
				if (tmp < min)
					min = tmp;
			}
			it2++;
		}
		it1++;
	}
	return (min);
}

int		Span::longestSpan(void)
{
	int							max;
	int							tmp;
	std::vector<int>::iterator	it1;
	std::vector<int>::iterator	it2;

	if (this->list.size() <= 1)
		throw std::exception();
	max = 0;
	it1 = this->list.begin();
	while (it1 != this->list.end())
	{
		it2 = this->list.begin();
		while (it2 != this->list.end())
		{
			if (it1 != it2)
			{
				tmp = abs(*it1 - *it2);
				if (tmp > max)
					max = tmp;
			}
			it2++;
		}
		it1++;
	}
	return (max);
}
