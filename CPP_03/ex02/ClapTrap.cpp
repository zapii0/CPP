#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor called\n";
	_name = name;
	_health = 10;
	_attack_dmg = 0;
	_energy = 10;
}
ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	std::cout << "Copy constructor called\n";
	this->_name = obj._name;
	this->_health = obj._health;
	this->_attack_dmg = obj._attack_dmg;
	this->_energy = obj._energy;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	this->_name = obj._name;
	this->_health = obj._health;
	this->_attack_dmg = obj._attack_dmg;
	this->_energy = obj._energy;
	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack_dmg << " points of damage\n";
		_energy--;
		std::cout << "Energy left " << _energy << "\n";
	}
	else
		std::cout << "No enough points to attack " << target << "\n";
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (_health == 0)
	{
		std::cout << "ClapTrap " << _name << "doesn't have HP\n";
		return ;
	}
	_health -= amount;
	if (_health < 0)
		_health = 0;
	std::cout << "ClapTrap " << _name << " take " << amount << " points of damage\n";
	std::cout << "ClapTrap has " << _health << " HP left\n";
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy < 1)
	{
		std::cout << "ClapTrap " << _name << " No energy points left\n";
		return ;
	}
	else
	{
		_health += amount;
		_energy--;
		std::cout << "ClapTrap " << _name << " " << " repaired " << amount << " point of HP from " << amount << " points of energy\n";
		std::cout << "ClapTrap " << _name << " " << _health << " HP level\n";
	}
}
ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called\n";
}
