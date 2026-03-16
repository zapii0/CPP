#ifndef HUMAN_A
# define HUMAN_A

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string _name;
		Weapon _Weapon;
	public:
		void	attack();
		HumanA(std::string name, Weapon &newWeapon);
		~HumanA();
		HumanA();
};

#endif