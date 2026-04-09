#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <cmath>

class Fixed
{
	private:
	int	_fixed;
	static const int _fractionalBits = 8;
	public:
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
	Fixed(void);
	Fixed(const Fixed &obj);
	Fixed(const int n);
	Fixed(const float fN);
	Fixed& operator=(const Fixed &obj);
	~Fixed(void);
};
std::ostream& operator<<(std::ostream& os, const Fixed &obj);
#endif