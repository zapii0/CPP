#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else if (ac == 2)
	{
		for (int i=0; av[1][i]; i++)
			av[1][i] = toupper(av[1][i]);
		std::cout << av[1] << std::endl;
	}
	else
		return (0);
}
