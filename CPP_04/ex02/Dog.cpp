#include "Dog.hpp"

Dog::Dog() : Animal()
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called\n";
}

Dog::Dog(std::string type) : Animal(type)
{
	this->type = type;
	_brain = new Brain();
	std::cout << "Dog " << this->type << " constructor called\n";
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called\n";
	this->type = obj.type;
	this->_brain = new Brain(*obj._brain); 
}

Dog& Dog::operator=(const Dog &obj)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &obj)
	{
		this->type = obj.type;
		delete this->_brain;
		this->_brain = new Brain(*obj._brain);
	}
	return (*this);
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound() const
{
	std::cout << "Dog sound: Woof!\n";
}

Brain* Dog::getBrain() const
{
	return (_brain);
}