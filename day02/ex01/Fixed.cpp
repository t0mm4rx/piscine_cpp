#include "Fixed.hpp"

Fixed::Fixed()
{
	this->rawBits = 0;
}

Fixed::Fixed(const int value)
{
	this->rawBits = value << this->bitsNumber;
}

Fixed::Fixed(const float value)
{
	this->rawBits = roundf(value * (1 << this->bitsNumber));
}

Fixed::~Fixed()
{
	return ;
}

Fixed::Fixed(const Fixed &source)
{
	*this = source;
}

Fixed			&Fixed::operator=(const Fixed &other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

void			Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}

int				Fixed::getRawBits(void) const
{
	return (this->rawBits);
}

float			Fixed::toFloat(void) const
{
    return ((float)(this->rawBits) / (1 << this->bitsNumber));
}

int				Fixed::toInt(void) const
{
    return ((int)(this->rawBits >> this->bitsNumber));
}

std::ostream	&operator<<(std::ostream &out, const Fixed &val)
{
    out << val.toFloat();
    return (out);
}
