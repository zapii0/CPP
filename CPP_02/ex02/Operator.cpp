#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed &obj)
{
	os << obj.toFloat();

	return (os);
}
