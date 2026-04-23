#ifndef CLAP_TRAP
# define CLAP_TRAP

# include <iostream>
# include <string>


class	ClapTrap
{
	protected:
	std::string	_name;
	int			_health;
	int			_energy;
	int			_attack_dmg;
	public:
	ClapTrap(std::string name);
	ClapTrap();
	ClapTrap(const ClapTrap &obj);
	ClapTrap& 	operator=(const ClapTrap &obj);
	void		attack(const std::string& target);
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
	~ClapTrap();
};


#endif