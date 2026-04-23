#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
	std::cout << "ScavTrap constructor called\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called\n";
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode\n";
}

void		ScavTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage\n";
		_energy--;
		std::cout << "Energy left " << _energy << "\n";
	}
	else
		std::cout << "No enough points to attack " << target << "\n";

}

ScavTrap::ScavTrap(const ScavTrap &obj) : ClapTrap(obj)
{
	std::cout << "ScavTrap Copy constructor called\n";
	this->_name = obj._name;
	this->_health = obj._health;
	this->_attack_dmg = obj._attack_dmg;
	this->_energy = obj._energy;
}
ScavTrap::ScavTrap()
{
	std::cout << "Deafult constructor called\n";
	this->_name = "deafult";
	this->_health = 100;
	this->_energy = 50;
	this->_attack_dmg = 20;
}
