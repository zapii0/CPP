#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	std::cout << "HumanA: " << _name << " with: " << _weapon.getType() << "\n"; 
}

HumanA::~HumanA()
{
	;
}

void	HumanA::attack()
{
	std::cout << _name << "atacts with: " << _weapon.getType() << "\n";
}