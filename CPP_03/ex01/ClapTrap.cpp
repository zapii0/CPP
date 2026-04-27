#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_health = 10;
	this->_attack_dmg = 0;
	this->_energy = 10;
	std::cout << "ClapTrap " << this->_name << " constructor called\n";
}
ClapTrap::ClapTrap()
{
	this->_name = "default";
	this->_health = 10;
	this->_attack_dmg = 0;
	this->_energy = 10;
	std::cout << "ClapTrap " << this->_name << " default constructor called\n";
}

ClapTrap::ClapTrap(const ClapTrap &obj)
{
	this->_name = obj._name;
	this->_health = obj._health;
	this->_attack_dmg = obj._attack_dmg;
	this->_energy = obj._energy;
	std::cout << "ClapTrap " << this->_name << " copy constructor called\n";
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj)
{
	if (this == &obj)
	return (*this);
	this->_name = obj._name;
	this->_health = obj._health;
	this->_attack_dmg = obj._attack_dmg;
	this->_energy = obj._energy;
	std::cout << "ClapTrap " << this->_name << " copy assignment operator called\n";
	return (*this);
}

void		ClapTrap::attack(const std::string& target)
{
	if (this->_energy > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_dmg << " points of damage\n";
		this->_energy--;
		std::cout << "Energy left " << this->_energy << "\n";
	}
	else
		std::cout << "No enough points to attack " << target << "\n";
}

void		ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_health == 0)
	{
		std::cout << "ClapTrap " << this->_name << "doesn't have HP\n";
		return ;
	}
	this->_health -= amount;
	if (this->_health < 0)
		this->_health = 0;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage\n";
	std::cout << "ClapTrap has " << this->_health << " HP left\n";
}

void		ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy < 1)
	{
		std::cout << "ClapTrap " << this->_name << " No energy points left\n";
		return ;
	}
	else
	{
		_health += amount;
		_energy--;
		std::cout << "ClapTrap " << this->_name << " " << " repaired " << amount << " point of HP from " << amount << " points of energy\n";
		std::cout << "ClapTrap " << this->_name << " " << this->_health << " HP level\n";
	}
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << this->_name << " destructor called\n";
}
