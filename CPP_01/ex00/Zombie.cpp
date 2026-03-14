#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ...";
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << "deleted\n";
}