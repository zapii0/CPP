#include "AAnimal.hpp"

std::string	AAnimal::getType() const
{
	return (type);
}

AAnimal::AAnimal()
{
	std::cout << "AAnimal " << this->type << "default constructor called\n";
	type = "default animal";
}

AAnimal::AAnimal(std::string type)
{
	std::cout << "AAnimal " << type << " construtor called\n";
	this->type = type;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	std::cout << "AAnimal " << type << " Copy constructor called\n";
	if (this == &obj)
		return ;
	else
		this->type = obj.type;
}

AAnimal&	AAnimal::operator=(const AAnimal &obj)
{
	std::cout << "AAnimal " <<  this->type << " Copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	else
	{
		this->type = obj.type;
		return (*this);
	}
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor called\n";
}
