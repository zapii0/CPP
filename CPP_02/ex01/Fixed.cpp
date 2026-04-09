#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed = 0;
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &obj)
{
	std::cout << "Copy constructor called\n";
	_fixed = obj._fixed;
}

Fixed& Fixed::operator=(const Fixed &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &obj)
		return *this;
	_fixed = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)_fixed / (float)(1 << _fractionalBits));
}

int		Fixed::toInt(void) const
{
	return (_fixed >> _fractionalBits);
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
	_fixed = (n << _fractionalBits);
}

Fixed::Fixed(const float fN)
{
	std::cout << "Float constructor called\n";
	_fixed = roundf(fN * (1 << _fractionalBits));
}
