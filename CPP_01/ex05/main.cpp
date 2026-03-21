#include "Harl.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "wrong argument\n";
		return (-1);
	}
	Harl complainer;
	
	complainer.complain(av[1]);
	return (0);
}