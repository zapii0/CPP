#include "Animal.hpp"

std::string	Animal::getType() const
{
	return (type);
}

Animal::Animal()
{
	std::cout << "Animal " << this->type << "default constructor called\n";
	type = "default animal";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal " << type << " construtor called\n";
	this->type = type; 
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Animal " << type << " Copy constructor called\n";
	if (this == &obj)
		return ;
	else
		this->type = obj.type;
}

Animal&	Animal::operator=(const Animal &obj)
{
	std::cout << "Animal " <<  this->type << " Copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	else
	{
		this->type = obj.type;
		return (*this);
	}
}

Animal::~Animal()
{
	std::cout << "Destructor called\n";
}
