#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called\n";
	type = "default animal";
}

Animal::Animal(std::string type)
{
	std::cout << "Animal construtor called\n";
	this->type = type; 
}

Animal::Animal(const Animal &obj)
{
	std::cout << "Copy constructor called\n";
	if (this == &obj)
		return ;
	else
		this->type = obj.type;
}

Animal&	Animal::operator=(const Animal &obj)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	else
	{
		this->type = obj.type;
		return (*this);
	}
}

void	Animal::makeSound()
{
	std::cout << "Default animal sound\n";
}

Animal::~Animal()
{
	std::cout << "Destructor called\n";
}
