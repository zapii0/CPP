#ifndef FRAG_TRAP
# define FRAG_TRAP

# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap&	operator=(const FragTrap &obj);
	FragTrap(const FragTrap &obj);
	void	highFivesGuys(void);
	~FragTrap();
};

#endif