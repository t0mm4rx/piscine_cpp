#ifndef Span_hpp
# define Span_hpp

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>
# include <climits>
# include <functional>

class Span
{
	public:
							Span(void);
							Span(const Span &other);
							Span(unsigned int n);
							~Span(void);
		Span				&operator=(const Span &other);
		void				addNumber(int n);
		void				addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);
		int					shortestSpan(void);
		int					longestSpan(void);
	private:
		std::vector<int>	list;
		bool				isInList(int n);
		unsigned int		maxItems;
};

#endif
