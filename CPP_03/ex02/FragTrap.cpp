#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	this->_name = "default";
	this->_health = 100;
	this->_energy = 100;
	this->_attack_dmg = 30;
	std::cout << "Default constructor called\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_health = 100;
	this->_energy = 100;
	this->_attack_dmg = 30;
	std::cout << "Construtor called\n";
}

FragTrap&	FragTrap::operator=(const FragTrap &obj)
{
	if (this == &obj)
		return (*this);
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_attack_dmg = obj._attack_dmg;
	this->_name = obj._name;
	std::cout << "Frag copy assignment operator called\n";
	return (*this);
}

FragTrap::FragTrap(const FragTrap &obj) : ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called\n";
	this->_health = obj._health;
	this->_energy = obj._energy;
	this->_attack_dmg = obj._attack_dmg;
	this->_name = obj._name;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout << "High five friend\n";
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called\n";
}
