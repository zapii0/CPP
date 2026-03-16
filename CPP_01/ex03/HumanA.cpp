#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &newweapon)
{
	_name = name;
	_Weapon = newweapon;
	std::cout << "HumanA: " << _name << " with: " << _Weapon.getType() << "\n"; 
}

HumanA::~HumanA()
{
	;
}
HumanA::HumanA()
{
	;
}