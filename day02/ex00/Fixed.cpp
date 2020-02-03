#include "Fixed.hpp"

Fixed::Fixed()
{
	this->rawBits = 0;
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(Fixed &source)
{
	*this = source;
}

Fixed	&Fixed::operator=(Fixed &other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

int		Fixed::getRawBits(void) const
{
	return (this->rawBits);
}
