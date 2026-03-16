#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

class Zombie
{
	private:
	std::string _name;
	public:
	void	NameSetter(std::string name);
	void	announce(void);
	Zombie();
	~Zombie();
};
Zombie	*zombieHorde(int N, std::string name);
#endif