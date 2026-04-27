#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed
{
	private:
	int	_fixed;
	static const int _fractionalBits = 8;
	public:
	int	getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed(void);
	Fixed(const Fixed &obj);
	Fixed& operator=(const Fixed &obj);
	~Fixed(void);
};

#endif