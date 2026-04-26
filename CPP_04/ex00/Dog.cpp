#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog default constructor called\n";
	type = "default dog";
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Dog constructor called\n";
	this->type = type;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called\n";
	if (this == &obj)
		return ;
	this->type = obj.type;
}

Dog& Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound()
{
	std::cout << "Dog sound: Woof!\n";
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}
