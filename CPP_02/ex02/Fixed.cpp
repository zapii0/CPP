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

bool Fixed::operator>(const Fixed &rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (1);
	else
		return (0); 
}

bool Fixed::operator<(const Fixed &rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator>=(const Fixed &rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator<=(const Fixed &rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator==(const Fixed &rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (1);
	else
		return (0);
}

bool Fixed::operator!=(const Fixed &rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (1);
	else
		return (0);
}

Fixed Fixed::operator+(const Fixed &rhs) const
{
	Fixed	res;
	res.setRawBits(this->getRawBits() + rhs.getRawBits ());
	return (res);
}

Fixed Fixed::operator-(const Fixed &rhs) const
{
	Fixed res;
	res.setRawBits (this->getRawBits() - rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator*(const Fixed &rhs) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() * rhs.getRawBits());
	return (res);
}

Fixed Fixed::operator/(const Fixed &rhs) const
{
	Fixed res;
	res.setRawBits(this->getRawBits() / rhs.getRawBits());
	return (res);
}

Fixed& Fixed::operator++()
{
	this->_fixed++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	this->_fixed++;
	return (temp);
}

Fixed& Fixed::operator--()
{
	this->_fixed--;
	return (*this);
}
Fixed Fixed::operator--(int)
{
	Fixed	temp(*this);

	this->_fixed--;
	return (temp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}
