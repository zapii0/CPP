#include "sed.hpp"

int	main(int ac, char **av)
{
	if (ac == 4)
	{
		std::string filename = av[1];
		std::string s1 = av[2];
		std::string s2 = av[3];
		
		if (filename.empty() || s1.empty() || s2.empty())
			return (-1);
		// erase insert
		std::ifstream input(filename.c_str());
		if (!input.is_open())
		{
			std::cerr << "File: " << filename <<" is unreadable" << std::endl;
			return (-1);
		}
		filename += ".replace";
		std::ofstream outputFile(filename.c_str());
		if (!outputFile.is_open())
		{
			std::cout << "error while creating filename.replace" << std::endl;
			return (-1);
		}
		iReaderAndOutputFiller(input, s1, s2, outputFile);
		input.close();
		outputFile.close();
	}
	else
		return (-1);
}