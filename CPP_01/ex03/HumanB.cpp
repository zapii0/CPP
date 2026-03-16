#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
	std::cout << "HumanB: " << _name << " created\n";
}

HumanB::~HumanB()
{
	;
}

void	HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with: " << _weapon->getType() << "\n";
	else
		std::cout << _name << " is unarmed\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
