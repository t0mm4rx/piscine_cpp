#ifndef Span_hpp
# define Span_hpp

# ifndef INT_MAX
#  define INT_MAX 2147483647
# endif

# include <iostream>
# include <vector>
# include <algorithm>
# include <cmath>

class Span
{
	public:
							Span(void);
							Span(unsigned int n);
		void				addNumber(int n);
		int					shortestSpan(void);
		int					longestSpan(void);
	private:
		std::vector<int>	list;
		bool				isInList(int n);
		unsigned int		maxItems;
};

#endif
