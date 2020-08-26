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
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		int					toInt(void) const;
		float				toFloat(void) const;
		Fixed				&operator=(const Fixed &other);
		Fixed				&operator++(void);
    	Fixed				&operator--(void);
    	Fixed				operator++(int);
    	Fixed				operator--(int);
    	bool				operator>(const Fixed &other) const;
    	bool				operator<(const Fixed &other) const;
    	bool				operator>=(const Fixed &other) const;
    	bool				operator<=(const Fixed &other) const;
    	bool				operator==(const Fixed &other) const;
    	bool				operator!=(const Fixed &other) const;
    	Fixed				operator+(const Fixed &other) const;
    	Fixed				operator-(const Fixed &other) const;
    	Fixed				operator*(const Fixed &other) const;
    	Fixed				operator/(const Fixed &other) const;
		static Fixed		&min(Fixed &a, Fixed &b);
		const static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed &a, const Fixed &b);

};

std::ostream				&operator<<(std::ostream &out, const Fixed &in);

#endif
