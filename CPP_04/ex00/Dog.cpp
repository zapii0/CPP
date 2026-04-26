#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "default dog";
	std::cout << "Dog " << type << " default constructor called\n";
}

Dog::Dog(std::string type) : Animal(type)
{
	this->type = type;
	std::cout << "Dog " << this->type << " constructor called\n";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog " << obj.type << " copy constructor called\n";
	this->type = obj.type;
}

Dog& Dog::operator=(const Dog &obj)
{
	std::cout << "Dog " << obj.type << " copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Dog sound: Woof!\n";
}

Dog::~Dog()
{
	std::cout << "Dog " << type << " destructor called\n";
}
