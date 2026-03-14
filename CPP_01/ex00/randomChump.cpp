#include "Zombie.hpp"

void	randomChump(std::string name)
{
	if (name.empty())
		return ;
	Zombie	Zombie;

	_name = name;
	announce();
}
