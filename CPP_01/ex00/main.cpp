#include "Zombie.hpp"

int	main(void)
{
	Zombie dupa;
	Zombie *zombieHeap;
	zombieHeap->newZombie("Heap");
	zombieHeap->announce();
	dupa.randomChump("zombiestack");
	delete zombieHeap;
}