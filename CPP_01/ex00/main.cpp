#include "Zombie.hpp"

int	main(void)
{
	// Stack Zombie
	std::cout << "Stack Zombie:\n";
	randomChump("rysiu");

	// Heap Zombie
	std::cout << "Heap Zombie:\n";
	Zombie *demon = newZombie("demon");
	demon->announce();
	delete demon;
}
