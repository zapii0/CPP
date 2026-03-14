#include "Zombie.hpp"

Zombie	newZombie(std::string name)
{
	Zombie *newZom = new Zombie();

	newZom._name = name;
	return (newZom);
}
