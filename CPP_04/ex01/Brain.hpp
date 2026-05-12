#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
	public:
		std::string ideas[100];
		Brain();
		Brain(const Brain &obj);
		Brain& operator=(const Brain &obj);
		~Brain();
};

#endif