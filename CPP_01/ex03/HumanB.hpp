#ifndef HUMAN_B
# define HUMAN_B

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon* 	_weapon;
	public:
		void	attack();
		void	setWeapon(Weapon &weapon);
		HumanB(std::string name);
		~HumanB();
};

#endif