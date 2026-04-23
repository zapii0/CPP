#ifndef	SCAV_TRAP
# define SCAV_TRAP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap &obj);
	ScavTrap& 	operator=(const ScavTrap &obj);
	void		attack(const std::string& target);
	void	guardGate();
};

#endif