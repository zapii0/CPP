#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	_name = name;
	std::cout << "HumanB: " << _name << " with: " << _Weapon.getType() << "\n"; 
}

HumanB::~HumanB()
{
	;
}