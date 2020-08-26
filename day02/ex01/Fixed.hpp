#ifndef Fixed_hpp
#define Fixed_hpp

#include <cmath>
#include <iostream>

class Fixed {
	private:
		int					rawBits;
		static const int	bitsNumber = 8;
	public:
							Fixed();
							Fixed(const int value);
							Fixed(const float value);
							~Fixed();
							Fixed(const Fixed &source);
		Fixed				&operator=(const Fixed &other);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
};

std::ostream				&operator<<(std::ostream &out, const Fixed &in);

#endif
