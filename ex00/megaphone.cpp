#include <iostream>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else if (ac > 1)
	{
		for (int j = 1; av[j]; j++)
		{
			for (int i=0; av[j][i]; i++)
			{
				av[j][i] = toupper(av[j][i]);
				std::cout << av[j][i];
			}
			if (av[j + 1])
				std::cout << ' ';
		}
		std::cout << '\n';
	}
}
