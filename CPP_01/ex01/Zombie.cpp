#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " deleted\n";
}

Zombie::Zombie()
{
	std::cout << "zombie created\n";
}

void	Zombie::NameSetter(std::string name)
{
	this->_name = name;
}