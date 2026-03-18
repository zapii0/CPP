#include "sed.hpp"

void	iReaderAndOutputFiller(std::ifstream &input,std::string s1,std::string s2, std::ofstream &output)
{
	std::string		line;
	std::string		temp = "";

	while (std::getline(input, line))
	{
		temp += line;
		if (!input.eof())
			temp += "\n";
	}
	size_t pos = 0;
	size_t start_pos = 0;
	while (true)
	{
		pos = temp.find(s1, start_pos);
		if (pos == std::string::npos)
			break ;
		temp.erase(pos, s1.length());
		temp.insert(pos, s2);
		start_pos = pos + s2.length();
	}
	output << temp;
}
