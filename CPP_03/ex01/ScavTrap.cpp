#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap " << this->_name << " constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name << " destructor called\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap "<< this->_name << " is now in Gate keeper mode\n";
}

void		ScavTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage\n";
		_energy--;
		std::cout << "Energy left " << this->_energy << "\n";
	}
	else
		std::cout << "No enough points to attack " << target << "\n";

}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	this->_name = obj._name;
	this->_health = obj._health;
	this->_attack_dmg = obj._attack_dmg;
	this->_energy = obj._energy;
	std::cout <<  "ScavTrap " << this->_name << " Copy constructor called\n";
}
ScavTrap::ScavTrap()
{
	this->_name = "deafult";
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
	std::cout << this->_name << " deafult constructor called\n";
}
