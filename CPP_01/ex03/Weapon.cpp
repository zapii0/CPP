#include "Weapon.hpp"

Weapon::Weapon(std::string Weapon)
{
	setType(Weapon);
}
Weapon::~Weapon()
{
	;
}

const std::string& Weapon::getType() const
{
	return _type;
}

void	Weapon::setType(std::string type)
{
	_type = type;
}