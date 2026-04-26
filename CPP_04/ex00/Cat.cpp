#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat default constructor called\n";
	type = "default cat";
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Cat constructor called\n";
	this->type = type;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called\n";
	if (this == &obj)
		return ;
	this->type = obj.type;
}

Cat& Cat::operator=(const Cat &obj)
{
	std::cout << "Cat copy assignment operator called\n";
	if (this == &obj)
		return (*this);
	this->type = obj.type;
	return (*this);
}

void	Cat::makeSound()
{
	std::cout << "Cat sound: Meow!\n";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}
