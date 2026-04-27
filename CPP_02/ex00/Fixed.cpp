#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed = 0;
	std::cout << "Constructor called\n";
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
	if (this == &obj)
		return *this;
	_fixed = obj.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called\n";
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits called\n";
	_fixed = raw;
}
