#ifndef HUMAN_B
# define HUMAN_B

# include <iostream>
# include <string>
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string _name;
		Weapon _Weapon;
	public:
		void	attack();
		HumanB(std::string name);
		~HumanB();
};

#endif