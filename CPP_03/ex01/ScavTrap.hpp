#ifndef	SCAV_TRAP
# define SCAV_TRAP

# include "ClapTrap.hpp"

class	ScavTrap : public ClapTrap
{
	public:
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap& 	operator=(const ScavTrap &obj);
	void		attack(const std::string& target);
	void	guardGate();
};

#endif