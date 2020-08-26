#ifndef Fixed_hpp
#define Fixed_hpp

class Fixed {
	private:
		int					rawBits;
		static const int	bitsNumber = 8;
	public:
							Fixed();
							~Fixed();
							Fixed(Fixed &source);
		Fixed				&operator=(Fixed &other);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

#endif
